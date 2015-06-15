<?php

abstract class DomainObject
{

    private $group;

    public function __construct()
    {
        $this->group = static::getGroup();
    }

    public static function create()
    {
        return new static();
    }
    
    static function getGroup()
    {
        return 'default';
    }
}