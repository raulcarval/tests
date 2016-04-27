<?php

require_once '../vendor/autoload.php';
ini_set('display_errors', true);

$vars = new Vars(__DIR__.'/config/config.yml');

print_r($vars);

