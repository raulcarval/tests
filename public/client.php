<?php
ini_set('display_errors', 1);
require '../vendor/autoload.php';

//$product1 = new ShopProduct("My Antonia", "Willa", "Cather", 5.99);
//print "author: {$product1->getProducer()}\n";

$settings = simplexml_load_file("settings.xml");
$manager = new AddressManager();
$manager->outputAddresses((string)$settings->resolvedomains );


