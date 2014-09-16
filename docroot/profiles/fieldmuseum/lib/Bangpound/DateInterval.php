<?php

namespace Bangpound;

class DateInterval extends \DateInterval
{
    private static function iso8601interval(\DateInterval $interval)
    {
        $output = 'P';
        if ($interval->y) {
            $output .= $interval->y . 'Y';
        }

        if ($interval->m) {
            $output .= $interval->m . 'M';
        }

        if ($interval->d) {
            $output .= $interval->d . 'D';
        }

        if ($interval->h || $interval->i || $interval->s) {
            $output .= 'T';
        }

        if ($interval->h) {
            $output .= $interval->h . 'H';
        }

        if ($interval->i) {
            $output .= $interval->i . 'M';
        }

        if ($interval->s) {
            $output .= $interval->s . 'S';
        }

        return $output;
    }

    public function __toString()
    {
        return self::iso8601interval($this);
    }

    public static function createFromDateInterval(\DateInterval $interval)
    {
        return new self(self::iso8601interval($interval));
    }
}
