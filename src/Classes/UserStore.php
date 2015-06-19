<?php
namespace Classes;

class UserStore
{

    private $users = array();

    public function addUser($name, $mail, $pass)
    {
        if (isset($this->users[$mail])) {
            throw new \Exception("User {$mail} already in the system");
        }
        
        if (strlen($pass) < 5) {
            throw new \Exception("Password must have 5 or more letters");
        }
        
        $this->users[$mail] = array(
            'pass' => $pass,
            'mail' => $mail,
            'name' => $name
        );
        return true;
    }

    public function notifyPasswordFailure($mail)
    {
        if (isset($this->users[$mail])) {
            $this->users[$mail]['failed'] = time();
        }
    }

    public function getUser($mail)
    {
        return ($this->users[$mail]);
    }
}
