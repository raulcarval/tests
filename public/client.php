<?php
ini_set('display_errors', 1);
require '../vendor/autoload.php';

$store = new UserStore();
$store->addUser("bob williams", "bob@example.com", "12345");
$validator = new Validator($store);
if ($validator->validateUser("bob@example.com", "12345")) {
    print "pass, friend!\n";
}
    