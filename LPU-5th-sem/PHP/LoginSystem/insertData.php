<?php

$sql = "INSERT INTO users (username, password, email, reg_date)
    VALUES ('Nitin', '12345', 'nitin@gmail.com', current_timestamp())";

if (mysqli_query($conn, $sql)) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

// close connection
mysqli_close($conn);


?>