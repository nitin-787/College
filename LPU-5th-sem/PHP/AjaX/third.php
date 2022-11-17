<?php

$mysqli = new mysqli("localhost", "root", "", "loginsystem");

if ($mysqli->connect_errno) {
    echo "Failed to connect to MySQL: " . $mysqli->connect_error;
    exit();
}


$sql = "SELECT id, username, password, email, reg_date

FROM users WHERE id = ?";

if ($stmt = $mysqli->prepare($sql)) {

    $stmt->bind_param("i", $_GET['id']);

    $stmt->execute();

    $stmt->bind_result(
        $id,
        $username,
        $password,
        $eamil,
        $reg_date
    );

    $stmt->fetch();

    $stmt->close();
}

echo "<table border='1'>
<tr>
<th>id</th>
<th>username</th>
<th>password</th>
<th>email</th>
<th>reg_date</th>
</tr>";

echo "<tr>";
echo "<td>" . $id . "</td>";
echo "<td>" . $username . "</td>";
echo "<td>" . $password . "</td>";
echo "<td>" . $eamil . "</td>";
echo "<td>" . $reg_date . "</td>";
echo "</tr>";
echo "</table>";
