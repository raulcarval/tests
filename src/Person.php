<?php

class Person
{

    private $name;

    private $age;

    private $id;

    public $account;

    function __construct($name, $age, Account $account)
    {
        $this->name = $name;
        $this->age = $age;
        $this->account = $account;
    }

    function setId($id)
    {
        $this->id = $id;
    }

    function __clone()
    {
        $this->id = 0;
        $this->account = clone $this->account;
    }
}