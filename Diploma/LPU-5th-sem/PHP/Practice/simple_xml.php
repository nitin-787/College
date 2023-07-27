<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php

    libxml_use_internal_errors(true);
    $myXMLdata = "<?xml version='1.0' encoding='UTF-8'?>

    <doucment>
        <users> Nitin </users>
        <email>nitin@gamil.com</email>
    </doucment>";

    $xml = simplexml_load_string($myXMLdata);
    if (!$xml) {
        echo "Failed loading XML: ";
        foreach (libxml_get_errors() as $error->message) {
            echo "<br>", $error;
        }
    } else {
        print_r($xml);
    }


    ?>
</body>

</html>