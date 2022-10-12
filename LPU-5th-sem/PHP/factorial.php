<?php

// factorial
function factorial($n)
{
    $fact = 1;
    for ($i = 1; $i <= $n; $i++) {
        $fact = $fact * $i;
    }
    return $fact;
}

echo factorial(5);
