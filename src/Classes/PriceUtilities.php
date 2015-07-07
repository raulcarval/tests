<?php
namespace Classes;
trait PriceUtilities
{

    function calculateTax($price)
    {
        return (($this->getTaxRate() / 100) * $price);
    }

    abstract function getTaxRate();
}