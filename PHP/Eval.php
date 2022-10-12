<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>PHP Evaluation Two</title>
</head>

<body>

    <?php

    $word = "iron manaa";
    $word = strtolower($word);
    $firstA = "This is false";

    for ($i = 0; $i < strlen($word); $i++) {
        if (($word[$i - 1]) == "a" && ($word[$i] == "a")) {
            $firstA = "This is true";
            break;
        }
    }
    echo $firstA;
    ?>
    </form>
</body>

</html>