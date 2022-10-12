<?php
$username = $_POST['username'];
$password = $_POST['password'];
$state = $_POST['state'];
$zip = $_POST['zip'];

if (isset($_POST['username']) && strlen($username > 1)) {
    setcookie("Nitin[username]", $username);
    setcookie("Nitin[password]", $password);
    setcookie("Nitin[state]", $state);
    setcookie("Nitin[zip]", $zip);


    foreach ($_COOKIE["Nitin"] as $username => $value) {
        echo $key . " is " . $value . "<br>";
    }
} else {
    echo "Redirection faild";
}
