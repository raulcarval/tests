<?php
require_once '../vendor/autoload.php';

use Di\User;
use Di\SessionStorage;

ini_set('display_errors', 1);

$storage = new SessionStorage('SESSION_ID');
$user = new User($storage);

print_r($user);

