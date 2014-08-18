<?php
/**
 *  $Id$
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * This software consists of voluntary contributions made by many individuals
 * and is licensed under the LGPL. For more information please see
 * <http://phing.info>.
 */

require_once 'phing/Task.php';
require_once 'phing/tasks/ext/phpmd/PHPMDFormatterElement.php';

/**
 * Runs PHP Mess Detector. Checking PHP files for several potential problems
 * based on rulesets.
 *
 * @package phing.tasks.ext.phpmd
 * @author  Benjamin Schultz <bschultz@proqrent.de>
 * @version $Id$
 * @since   2.4.1
 */
class PHPMDTask extends Task
{
    /**
     * A php source code filename or directory
     *
     * @var PhingFile
     */
    protected $file = null;

    /**
     * All fileset objects assigned to this task
     *
     * @var FileSet[]
     */
    protected $filesets = array();

    /**
     * The rule-set filenames or identifier.
     *
     * @var string
     */
    protected $rulesets = 'codesize,unusedcode';

    /**
     * The minimum priority for rules to load.
     *
     * @var integer
     */
    protected $minimumPriority = 0;

    /**
     * List of valid file extensions for analyzed files.
     *
     * @var array
     */
    protected $allowedFileExtensions = array('php');

    /**
     * List of exclude directory patterns.
     *
     * @var array
     */
    protected $ignorePatterns = array('.git', '.svn', 'CVS', '.bzr', '.hg');

    /**
     * The format for the report
     *
     * @var string
     */
    protected $format = 'text';

    /**
     * Formatter elements.
     *
     * @var PHPMDFormatterElement[]
     */
    protected $formatters = array();

    /**
     * Set the input source file or directory.
     *
     * @param PhingFile $file The input source file or directory.
     */
    public function setFile(PhingFile $file)
    {
        $this->file = $file;
    }

    /**
     * Nested adder, adds a set of files (nested fileset attribute).
     *
     * @return void
     */
    public function addFileSet(FileSet $fs)
    {
        $this->filesets[] = $fs;
    }

    /**
     * Sets the minimum rule priority.
     *
     * @param integer $minimumPriority Minimum rule priority.
     */
    public function setMinimumPriority($minimumPriority)
    {
        $this->minimumPriority = $minimumPriority;
    }

    /**
     * Sets the rule-sets.
     *
     * @param string $ruleSetFileNames Comma-separated string of rule-set filenames or identifier.
     */
    public function setRulesets($ruleSetFileNames)
    {
        $this->rulesets = $ruleSetFileNames;
    }

    /**
     * Sets a list of filename extensions for valid php source code files.
     *
     * @param string $fileExtensions List of valid file extensions without leading dot.
     */
    public function setAllowedFileExtensions($fileExtensions)
    {
        $this->allowedFileExtensions = array();

        $token = ' ,;';
        $ext = strtok($fileExtensions, $token);

        while ($ext !== false) {
            $this->allowedFileExtensions[] = $ext;
            $ext = strtok($token);
        }
    }

    /**
     * Sets a list of ignore patterns that is used to exclude directories from the source analysis.
     *
     * @param string $ignorePatterns List of ignore patterns.
     */
    public function setIgnorePatterns($ignorePatterns)
    {
        $this->ignorePatterns = array();

        $token = ' ,;';
        $pattern = strtok($ignorePatterns, $token);

        while ($pattern !== false) {
            $this->ignorePatterns[] = $pattern;
            $pattern = strtok($token);
        }
    }

    /**
     * Create object for nested formatter element.
     *
     * @return PHPMDFormatterElement
     */
    public function createFormatter()
    {
        $num = array_push($this->formatters, new PHPMDFormatterElement());

        return $this->formatters[$num - 1];
    }

    /**
     * Executes PHPMD against PhingFile or a FileSet
     *
     * @throws BuildException - if the phpmd classes can't be loaded.
     */
    public function main()
    {
        /**
         * Find PHPMD
         */
        if (false === stream_resolve_include_path("PHP/PMD.php")) {
            @include_once 'PHPMD/PHPMD.php';
            $class_name = '\PHPMD\PHPMD';
            $new = true;
        } else {
            @include_once 'PHP/PMD.php';
            $class_name = "PHP_PMD";
            $new = false;
        }


        if (!class_exists($class_name)) {
            throw new BuildException(
                'PHPMDTask depends on PHPMD being installed and on include_path.',
                $this->getLocation()
            );
        }

        if ($new) {
            require_once 'PHPMD/AbstractRule.php';
            //weird syntax to allow 5.2 parser compatability
            $minPriority = constant('\PHPMD\AbstractRule::LOWEST_PRIORITY');
        } else {
            require_once 'PHP/PMD/AbstractRule.php';
            $minPriority = PHP_PMD_AbstractRule::LOWEST_PRIORITY;
        }

        if (!$this->minimumPriority) {
            $this->minimumPriority = $minPriority;
        }

        if (!isset($this->file) and count($this->filesets) == 0) {
            throw new BuildException('Missing either a nested fileset or attribute "file" set');
        }

        if (count($this->formatters) == 0) {
            // turn legacy format attribute into formatter
            $fmt = new PHPMDFormatterElement();
            $fmt->setType($this->format);
            $fmt->setUseFile(false);

            $this->formatters[] = $fmt;
        }

        $reportRenderers = array();

        foreach ($this->formatters as $fe) {
            if ($fe->getType() == '') {
                throw new BuildException('Formatter missing required "type" attribute.');
            }

            if ($fe->getUsefile() && $fe->getOutfile() === null) {
                throw new BuildException('Formatter requires "outfile" attribute when "useFile" is true.');
            }

            $reportRenderers[] = $fe->getRenderer();
        }

        // Create a rule set factory
        if ($new) {
            @require_once "PHPMD/RuleSetFactory.php";
            $ruleSetClass = '\PHPMD\RuleSetFactory';
            $ruleSetFactory = new $ruleSetClass(); //php 5.2 parser compatability

        } else {
            $ruleSetFactory = new PHP_PMD_RuleSetFactory();

        }
        $ruleSetFactory->setMinimumPriority($this->minimumPriority);

        $phpmd = new $class_name();
        $phpmd->setFileExtensions($this->allowedFileExtensions);
        $phpmd->setIgnorePattern($this->ignorePatterns);

        $filesToParse = array();

        if ($this->file instanceof PhingFile) {
            $filesToParse[] = $this->file->getPath();
        } else {
            // append any files in filesets
            foreach ($this->filesets as $fs) {
                foreach ($fs->getDirectoryScanner($this->project)->getIncludedFiles() as $filename) {
                    $f = new PhingFile($fs->getDir($this->project), $filename);
                    $filesToParse[] = $f->getAbsolutePath();
                }
            }
        }

        if (count($filesToParse) > 0) {
            $inputPath = implode(',', $filesToParse);

            $this->log('Processing files...');

            $phpmd->processFiles($inputPath, $this->rulesets, $reportRenderers, $ruleSetFactory);

            $this->log('Finished processing files');
        } else {
            $this->log('No files to process');
        }
    }
}