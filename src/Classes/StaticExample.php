<?php

class StaticExample
{

    public static $aNum = 0;

    static public function sayHello()
    {
        self::$aNum++;
        print "hello (" . self::$aNum . ")\n";
    }
}