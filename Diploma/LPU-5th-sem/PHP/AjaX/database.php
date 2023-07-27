<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<style>
</style>

<body>
    <h2>The XMLHttpRequest Object</h2>
    <form action="">
        <select name="customers" onchange="showCustomer(this.value)">
            <option value="">Select a customer:</option>
            <option value="1">John</option>
            <option value="2">Peter</option>
            <option value="3">Amy</option>
            <option value="4">Hannah</option>
            <option value="5">Michael</option>
        </select>
    </form>

    <br>
    <div id="txtHint">Customer info will be listed here...</div>

    <script>
        function showCustomer(str) {
            var xhttp;
            if (str == "") {
                document.getElementById("txtHint").innerHTML = "";
                return;
            }
            xhttp = new XMLHttpRequest();
            xhttp.onreadystatechange = function() {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("txtHint").innerHTML = this.responseText;
                }
            };
            xhttp.open("GET", "ajax.txt=" + str, true);
            xhttp.send();
        }
    </script>
</body>

</html>