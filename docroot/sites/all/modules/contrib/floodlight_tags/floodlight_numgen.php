<?php

// A very thorough attempt to prevent caching
header("Expires: Mon, 26 Jul 1997 05:00:00 GMT");
header("Last-Modified: " . gmdate("D, d M Y H:i:s") . " GMT"); 
header("Cache-Control: s-maxage=0, max-age=0, no-store, no-cache, must-revalidate"); 
header("Cache-Control: post-check=0, pre-check=0", false);
header("Pragma: no-cache");

// A rather unique number
$timestamp = str_replace(' ', '', microtime());
$timestamp = substr($timestamp, strpos($timestamp, '.') + 1);

// Add an extra random element to be paranoid
$timestamp = $timestamp.rand(0,9);

echo $timestamp;