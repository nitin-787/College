<?php
$str = "Hello World";
if ($str == null || strlen($str) == 1) {
    echo $str;
} else {
    $first = $str[0];
    $last = $str[-1];
    $firstValue = trim($str, $first);
    $secondValue = trim($firstValue, $last);
    $secondValue .= $first;
    $finalValue = $last.$secondValue;
    echo $finalValue;
}
?>