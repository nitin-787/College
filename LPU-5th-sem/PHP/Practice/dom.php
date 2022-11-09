<?php

$xml = new DOMDocument();
$xml->load('Ques1.xml');

print $xml->saveXML(); 


