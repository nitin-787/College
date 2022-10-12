<?php

// $cars = array(
//     array("Toyota", 22, 18),
//     array("BMW", 24, 12),
//     array("Land Rover", 17, 15)
// );


// for ($row = 0; $row < 3; $row++) {
//     echo "<p><br>Row number $row</br></p>";
//     echo "<ul>";
//     for ($col = 0; $col < 3; $col++) {
//         echo "<li>" . $cars[$row][$col] . "</li>";
//     }
//     echo "</ul>";
// }

$color = array(4 => 'white', 6 => 'Red', 7 => 'green');

echo $color[4];
echo "<br>";

$number = array(1, 2, 3, 4, 5);
array_unshift($number, 7);
echo print_r($number);

$x = array(1, 2, 3, 4, 5);
// print array
print_r($x);
echo "<br>";
// delete an element from array
unset($x[3]);
// after deltion print array
print_r($x);
echo "<br>";
// print all the number from 200 to 250 that are divisiblq by 4
for ($i = 199; $i <= 250; $i++) {
    if ($i % 4 == 0) {
        echo $i . "<br>";
    }
}


$strings = array("This", "is", "a", "string", "array");
$shortest = $strings[0];
$longest = $strings[0];
for ($i = 0; $i < count($strings); $i++) {
    if (strlen($strings[$i]) < strlen($shortest)) {
        $shortest = $strings[$i];
    }
    if (strlen($strings[$i]) > strlen($longest)) {
        $longest = $strings[$i];
    }
}
echo "The shortest string is: " . $shortest . "<br>";
echo "The longest string is: " . $longest . "<br>";
