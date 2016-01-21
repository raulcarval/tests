<?php
namespace Classes;

class User
{

    private $name;

    private $mail;

    private $pass;

    private $failed;

    function __construct($name, $mail, $pass)
    {
        if (strlen($pass) < 5) {
            throw new \Exception("Password must have 5 or more letters");
        }
        
        $this->name = $name;
        $this->mail = $mail;
        $this->pass = $pass;
    }

    function getName()
    {
        return $this->name;
    }

    function getMail()
    {
        return $this->mail;
    }

    function getPass()
    {
        return $this->pass;
    }

    function failed($time)
    {
        $this->failed = $time;
    }
}