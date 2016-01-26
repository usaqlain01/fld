<?php

namespace Bangpound\stojg\crop;

class CropEntropy extends \stojg\crop\CropEntropy
{
    public function getOffset($targetWidth, $targetHeight)
    {
        $offset = $this->getSpecialOffset($this->originalImage, $targetWidth, $targetHeight);

        return $offset;
    }
}
