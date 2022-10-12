<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Evaluation Three</title>
</head>

<body>

    <?php
    if (isset($_POST['calculator'])) {
        $numberOne = $_POST['numOne'];
        $numberTwo = $_POST['numTwo'];
        $opertation = $_POST['calculator'];

        if ($opertation == "+")
            $finalAns = $numberOne + $numberTwo;

        else if ($opertation == "-")
            $finalAns = $numberOne - $numberTwo;

        else if ($opertation == "x")
            $finalAns = $numberOne * $numberTwo;

        else if ($opertation == "/")
            $finalAns = $numberOne / $numberTwo;
        else if ($opertation == "%")
            $finalAns = $numberOne % $numberTwo;
    } ?>
    <form method="POST" action="">
        Enter First Number : <input name="numOne" value=""> </br><br>
        Enter Second Number : <input name="numTwo" value=""> </br><br>

        <input type="submit" name="calculator" value="+">
        <input type="submit" name="calculator" value="x">
        <input type="submit" name="calculator" value="/">
        <input type="submit" name="calculator" value="%">
        <input type="submit" name="calculator" value="-"> </br><br>


        Final Result : <input type='text' value="<?php echo $finalAns ?>">
    </form>
</body>

</html>