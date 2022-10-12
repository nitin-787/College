<?php

function nearest($a, $b)
{
    if ($a == $b) {
        return 0;
    } else if ($a > $b) {
        return $a;
    } else {
        return $b;

        
    }
}

echo nearest(89, 78);
