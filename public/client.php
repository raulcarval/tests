<?php
ini_set('display_errors', 1);
require '../vendor/autoload.php';

$processor = new ProcessSale();
$processor->registerCallback( array( new Mailer(), "doMail" ) );
 
$processor->sale( new Product( "shoes", 6 ) );
print "\n";
$processor->sale( new Product( "coffee", 6 ) );