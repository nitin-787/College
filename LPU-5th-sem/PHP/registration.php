<!DOCTYPE html>
<html lang="en">
<head>
    <title>Document</title>
    <style>.error {color: #FF0000;}</style>
</head>
<body>

<?php
    // define variables and set to empty values
$nameErr = $lname = $emailErr = $genderErr = $websiteErr = $stateErr = $cityErr  = "";
$name = $lnameErr = $email = $gender = $comment = $website = $state = $city = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (empty($_POST["fname"])) {
        $nameErr = "First Name is required";
    } else {
        $name = test_input($_POST["fname"]);
        // check if name only contains letters and whitespace
        if (!preg_match("/^[a-zA-Z ]$/",$name)) {
        $nameErr = "Only letters and white space allowed";
        }
    }

    if (empty($_POST["lname"])) {
        $lnameErr = "Last Name is required";
    } else {
        $lname = test_input($_POST["lname"]);
        // check if name only contains letters and whitespace
        if (!preg_match("/^[a-zA-Z ]$/",$lname)) {
        $lnameErr = "Only letters and white space allowed";
        }
    }

    if (empty($_POST["name"])) {
        $nameErr = "Name is required";
    } else {
        $name = test_input($_POST["name"]);
        // check if name only contains letters and whitespace
        if (!preg_match("/^[a-zA-Z ]$/",$name)) {
        $nameErr = "Only letters and white space allowed";
        }
    }

    if (empty($_POST["email"])) {
        $emailErr = "Email is required";
    } else {
        $email = test_input($_POST["email"]);
        // check if e-mail address is well-formed
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $emailErr = "Invalid email format";
        }
    }

    if (empty($_POST["website"])) {
        $website = "Please fill the website box";
    } else {
        $website = test_input($_POST["website"]);
        // check if URL address syntax is valid
        if (!preg_match("/\b(?:(?:https?|ftp):\/\/|www\.)[-a-z0-9+&@#\/%?=~_|!:,.;]*[-a-z0-9+&@#\/%=~_|]/i",$website)) {
        $websiteErr = "Invalid URL";
        }
    }

    if (empty($_POST["state"])) {
        $stateErr = "state is required";
    } else {
        $state = test_input($_POST["state"]);
        // check if name only contains letters and whitespace
        if (!preg_match("/^[a-zA-Z ]$/",$state)) {
        $stateErr = "Only letters and white space allowed";
        }
    }

    if (empty($_POST["city"])) {
        $cityErr = "city is required";
    } else {
        $cityErr = test_input($_POST["state"]);
        // check if name only contains letters and whitespace
        if (!preg_match("/^[a-zA-Z ]$/",$city)) {
        $cityErr = "Only letters and white space allowed";
        }
    }

    if (empty($_POST["gender"])) {
        $genderErr = "Gender is required";
    } else {
        $gender = test_input($_POST["gender"]);
        }
    }

    function test_input($data) {
        $data = trim($data);
        $data = stripslashes($data);
        $data = htmlspecialchars($data);
        return $data;
    }
?>  

    <h2>Resgistration form</h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        First name: <input type="text" name="fname" placeholder = "Enter your first name">
        <span class="error">* <?php echo $nameErr;?></span>
        <br><br>
        Last name: <input type="text" name="lname" placeholder = "Enter your last name">
        <span class="error">* <?php echo $nameErr;?></span>
        <br><br>
        E-mail: <input type="text" name="email" placeholder = "Enter your email">
        <span class="error">* <?php echo $emailErr;?></span>
        <br><br>
        Website: <input type="text" name="website" placeholder = "Enter your website url">
        <span class="error"><?php echo $websiteErr;?></span>
        <br><br>
        State: <input type="text" name="state" placeholder = "Enter your state">
        <span class="error">* <?php echo $stateErr;?></span>
        <br><br>
        City: <input type="text" name="city" placeholder = "Enter your city">
        <span class="error">* <?php echo $cityErr;?></span>
        <br><br>
        Gender:
        <input type="radio" name="gender" value="female">Female
        <input type="radio" name="gender" value="male">Male
        <input type="radio" name="gender" value="other">Other
        <span class="error">* <?php echo $genderErr;?></span>
        <br><br>
        <input type="submit" name="submit" value="Submit">
        </form>
</body>
</html>