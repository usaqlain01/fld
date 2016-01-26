<?php

namespace Bangpound\stojg\crop;

class CropBalanced extends \stojg\crop\CropBalanced
{
    public function getOffset($targetWidth, $targetHeight)
    {
        $offset = $this->getSpecialOffset($this->originalImage, $targetWidth, $targetHeight);

        return $offset;
    }
}
