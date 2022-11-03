<?php
$server = "localhost";
$username = "root";
$password = "";
$database = "loginSystem";

$conn = mysqli_connect($server, $username, $password, $database);

if (!$conn) {
    die("Error" . mysqli_connect_error());
}


// create a table in the database
$sql = "CREATE TABLE university (
    id INT(6) AUTO_INCREMENT PRIMARY KEY,
    reg_no VARCHAR(30) NOT NULL, 
    name VARCHAR(30) NOT NULL,
    course_code VARCHAR(30) NOT NULL, 
    school VARCHAR(30) NOT NULL,
    yearOfJoining VARCHAR(30) NOT NULL, 
    block_no VARCHAR(30) NOT NULL 
)";
if (mysqli_query($conn, $sql)) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

// Inserting data into the table
$sql = "INSERT INTO university (reg_no, name, course_code, school, yearOfJoining, block_no ) VALUES 
        ('0001', 'John Doe', 'CSC 101', 'School of Computing', '2018', 'A'),
        ('0003', 'Roronoa Zoro', 'CSC 101', 'School of Computing', '2018', 'A'),
        ('0004', 'Luffy', 'CSC 101', 'School of Computing', '2018', 'A'),
        ('0005', 'Ichigo', 'CSC 101', 'School of Computing', '2018', 'A'),
        ('0006', 'Rukia', 'CSC 101', 'School of Computing', '2018', 'A')";

// fetch data using order by
$sql = "SELECT * FROM university ORDER BY id ASC";

// fetch data using where 
$sql = "SELECT * FROM university WHERE name = 'Luffy'";

// fetch limited data
$sql = "SELECT * FROM university LIMIT 3";

// update the data in the database
$sql = "UPDATE university SET name = 'Nitin' WHERE name = 'Naruto'";
$sql = "SELECT * FROM university";
if ($reult = mysqli_query($conn, $sql)) {
    if (mysqli_num_rows($reult) > 0) {
        echo "<table>";
        echo "<tr>";
        echo "<th>id</th>";
        echo "<th>reg_no</th>";
        echo "<th>name</th>";
        echo "<th>course_code</th>";
        echo "<th>school</th>";
        echo "<th>yearOfJoining</th>";
        echo "<th>block_no</th>";
        echo "</tr>";
        while ($row = mysqli_fetch_array($reult)) {
            echo "<tr>";
            echo "<td>" . $row['id'] . "</td>";
            echo "<td>" . $row['reg_no'] . "</td>";
            echo "<td>" . $row['name'] . "</td>";
            echo "<td>" . $row['course_code'] . "</td>";
            echo "<td>" . $row['school'] . "</td>";
            echo "<td>" . $row['yearOfJoining'] . "</td>";
            echo "<td>" . $row['block_no'] . "</td>";
            echo "</tr>";
        }
        echo "</table>";
        // Free result set
        mysqli_free_result($reult);
    } else {
        echo "No records matching your query were found.";
    }
} else {
    echo "ERROR: Could not able to execute $sql. " . mysqli_error($conn);
}

// prepare an instert satement
$sql = "INSERT INTO university (reg_no, name, course_code, school, yearOfJoining, block_no)
        VALUES 
        
        (?, ?, ?, ?, ?, ?)";

if ($stmt = mysqli_prepare($conn, $sql)) {
    // Bind variables to the prepared statement as parameters
    mysqli_stmt_bind_param($stmt, "ssssss", $reg_no, $name, $course_code, $school, $yearOfJoining, $block_no);

    // Set parameters
    $reg_no = "0007";
    $name = "Sasuke";
    $course_code = "CSC 101";
    $school = "School of Computing";
    $yearOfJoining = "2018";
    $block_no = "A";

    // Attempt to execute the prepared statement
    if (mysqli_stmt_execute($stmt)) {
        echo "Records inserted successfully.";
    } else {
        echo "ERROR: Could not able to execute $sql. " . mysqli_error($conn);
    }
}
