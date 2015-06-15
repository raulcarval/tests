<?php

class UtilityService extends Service
{
    use PriceUtilities {
        PriceUtilities::calculateTax as private;
    }

    private $price;

    function __construct($price)
    {
        $this->price = $price;
    }

    function getTaxRate()
    {
        return 17;
    }

    function getFinalPrice()
    {
        return ($this->price + $this->calculateTax($this->price));
    }
}