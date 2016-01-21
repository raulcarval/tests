<?php
namespace Classes;

class Math
{

    public function sum($firstValue, $secondValue)
    {
        return $firstValue + $secondValue;
    }

    public function sub($firstValue, $secondValue)
    {
        return $firstValue - $secondValue;
    }

    public function div($firstValue, $secondValue)
    {
        return $firstValue / $secondValue;
    }

    public function mult($firstValue, $secondValue)
    {
        return $firstValue * $secondValue;
    }
}