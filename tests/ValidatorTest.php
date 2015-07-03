<?php
use Classes\UserStore;
use Classes\Validator;

class ValidatorTest extends PHPUnit_Framework_TestCase
{

    private $validator;

    public function setUp()
    {
        $store = new UserStore();
        $store->addUser("bob williams", "bob@example.com", "12345");
        $this->validator = new Validator($store);
    }

    public function tearDown()
    {}

    public function testValidate_CorrectPass()
    {
        $this->assertTrue($this->validator->validateUser("bob@example.com", "12345"), "Expecting successful validation");
    }

//     public function testValidate_FalsePass()
//     {
//         $store = $this->getMock("UserStore");
        
//         $this->validator = new Validator($store);
        
//         $store->expects($this->once())
//             ->method('notifyPasswordFailure')
//             ->with($this->equalTo('bob@example.com'));
        
//         $store->expects($this->any())
//             ->method("getUser")
//             ->will($this->returnValue(array(
//             "name" => "bob@example.com",
//             "pass" => "right"
//         )));
        
//         $this->validator->validateUser("bob@example.com", "wrong");
//     }
}
