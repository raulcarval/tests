<?php
use Classes\Math;
class PHPNativeElementsTest extends \PHPUnit_Framework_TestCase
{

    protected $math;

    public function setUp()
    {
        $this->math = new Math();
    }

    public function testOperacaoMatematica()
    {
        $this->assertEquals(3, $this->math->sum(1, 2), 'Não somou corretamente');
        $this->assertEquals(-1, $this->math->sub(1, 2), 'Não sub corretamente');
        $this->assertEquals(0.5, $this->math->div(1, 2), 'Não div corretamente');
        $this->assertEquals(2, $this->math->mult(1, 2), 'Não mult corretamente');
    }

    public function tearDown()
    {}
}