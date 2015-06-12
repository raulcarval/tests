<?php
ini_set('display_errors', 1);
require '../vendor/autoload.php';


$cd = new CdProduct('a', 'a', 'a', 'a', 'a');
$book = new BookProduct('b', 'b', 'b', 'b', 'b');

$text = new TextProductWriter();

$text->addProduct($cd);
$text->addProduct($book);
$text->write();



