<?php

function pattern($n)
{

    for ($row = 0; $row < $n; $row++) {
        for ($col = 0; $col < $row; $col++) {
            echo "* ";
        }
        echo "<br>";
    }
    for ($i = 1; $i <= $n; $i++) {
        for ($j = 1; $j <= $n - $i; $j++) {
            echo "*  ";
        }
        echo "<br>";
    }
}

echo pattern(10);
