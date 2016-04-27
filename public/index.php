<?php 

use M1\Vars\Vars;
require_once __DIR__.'/../vendor/autoload.php';

$app = new Silex\Application();

$app->get('/', function() use($app) {
    $vars = new Vars(__DIR__.'/../config/config.ini');
    var_dump($vars['database']['driver']);
   return '';
});

$app['debug'] = true;
$app->run();