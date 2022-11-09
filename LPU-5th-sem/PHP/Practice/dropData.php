<?php
$server = "localhost";
$username = "root";
$password = "";
$database = "loginSystem";

$conn = mysqli_connect($server, $username, $password, $database);

if (!$conn) {
    die("Error" . mysqli_connect_error());
}

// delete a table in the database
// $sql = "DROP TABLE university";
// if (mysqli_query($conn, $sql)) {
//     echo "Table deleted successfully";
// } else {
//     echo "Error: " . $sql . "<br>" . mysqli_error($conn);
// }

// delete data from the table
// $sql = "DELETE FROM users WHERE username = 'Nitin'";
// if (mysqli_query($conn, $sql)) {
//     echo "data deleted successfully";
// } else {
//     echo "Error: " . $sql . "<br>" . mysqli_error($conn);
// }
