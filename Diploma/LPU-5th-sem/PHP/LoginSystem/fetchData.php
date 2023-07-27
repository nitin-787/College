<?php

// fetch data from database
$sql = "SELECT * FROM users";
if ($reult = mysqli_query($conn, $sql)) {
    if (mysqli_num_rows($reult) > 0) {
        echo "<table>";
        echo "<tr>";
        echo "<th>id</th>";
        echo "<th>username</th>";
        echo "<th>password</th>";
        echo "<th>email</th>";
        echo "<th>reg_date</th>";
        echo "</tr>";
        while ($row = mysqli_fetch_array($reult)) {
            echo "<tr>";
            echo "<td>" . $row['id'] . "</td>";
            echo "<td>" . $row['username'] . "</td>";
            echo "<td>" . $row['password'] . "</td>";
            echo "<td>" . $row['email'] . "</td>";
            echo "<td>" . $row['reg_date'] . "</td>";
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
