<?php

// create table
$sql = "INSERT INTO users (username, password, email, reg_date)
    VALUES 
    ('Nitin', '12345', 'nitin@gmail.com', current_timestamp()),
    ('Roronoa', '343243', 'roronoa@gmail.com', current_timestamp()),
    ('Luffy', '686', 'luffy@gmail.com', current_timestamp()),
    ('Ichigo', '65t78', 'ichigo@gmail.com', current_timestamp()),
    ('Rukia', '3dd34', 'rukia@gmail.com', current_timestamp())";

if (mysqli_query($conn, $sql)) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

// close connection
mysqli_close($conn);


?>