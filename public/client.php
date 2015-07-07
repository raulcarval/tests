<?php
use Classes\ReflectionUtil;
ini_set('display_errors', 1);
require '../vendor/autoload.php';

print ReflectionUtil::getClassSource(new ReflectionClass('Classes\CdProduct'));