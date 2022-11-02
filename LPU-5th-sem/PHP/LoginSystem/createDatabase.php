<?php

// create database
$sql = "CREATE DATABASE loginSystem";
if (mysqli_query($conn, $sql)) {
    echo "Database created successfully";
} else {
    echo "Error creating database: " . mysqli_error($conn);
}

// close connection
mysqli_close($conn);
