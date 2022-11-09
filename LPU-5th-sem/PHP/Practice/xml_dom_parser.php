<?php

$xml = new DOMDocument();
$xml->load('Ques1.xml');

$x = $xml->documentElement;
foreach ($x->childNodes as $item) {
    print $item->nodeName . " = " . $item->nodeValue . "<br>";
}
