<?php
$server = "localhost";
$username = "root";
$password = "";

$conn = mysqli_connect($server, $username, $password);

if (!$conn) {
    die("Error" . mysqli_connect_error());
} else {
    echo "Connection successful";
}
