<?php
ini_set('display_errors', 1);
require '../vendor/autoload.php';

$product1 = new BookProduct('book1', 'firstbook1','mainbook1', 11.49, 121);
$product2 = new CdProduct('cd1', 'firstcd1','maincd1', 19.19, 50.55);

$obj = new ShopProductWriter();
$obj->addProduct($product1);
$obj->addProduct($product2);
