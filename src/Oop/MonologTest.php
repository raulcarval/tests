<?php 

namespace Classes;

use Monolog\Logger;
use Monolog\Handler\StreamHandler;

class MonologTest
{
    public function getLogger()
    {
        $log = new Logger('name');
        $log->pushHandler(new StreamHandler('app.log', Logger::WARNING));
        $log->addWarning('Foo');
        
    }
}