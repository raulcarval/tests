<?php
use tasks;
ini_set('display_errors', 1);
require '../vendor/autoload.php';

$classname = "Task";

$path = "../src/tasks/{$classname}.php";
if ( ! file_exists( $path ) ) {
    throw new Exception( "No such file as {$path}" );
}

require_once( $path );
$qclassname = "tasks\\$classname";
if ( ! class_exists( $qclassname ) ) {
    throw new Exception( "No such class as $qclassname" );
}

$myObj = new $qclassname();
$myObj->doSpeak();