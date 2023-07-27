<?php

$firstNum = 5;
$secondNum = 30;

if ($firstNum >= 20 || $secondNum <= 30) {
    if ($firstNum > $secondNum) {
        echo $firstNum;
    } else {
        echo $secondNum;
    }
} else {
    echo "0";
}
?>