<?php

class ShopProduct implements Chargeable, IdentityObject
{
    use PriceUtilities, IdentityTrait;

    const AVAILABLE = 0;

    const OUT_OF_STOCK = 1;

    private $title;

    private $producerMainName;

    private $producerFirstName;

    protected $price;

    private $discount = 0;

    public function __construct($title, $firstName, $mainName, $price)
    {
        $this->title = $title;
        $this->producerFirstName = $firstName;
        $this->producerMainName = $mainName;
        $this->price = $price;
    }

    public function getProducerFirstName()
    {
        return $this->producerFirstName;
    }

    public function getProducerMainName()
    {
        return $this->producerMainName;
    }

    public function setDiscount($num)
    {
        $this->discount = $num;
    }

    public function getDiscount()
    {
        return $this->discount;
    }

    public function getTitle()
    {
        return $this->title;
    }

    public function getPrice()
    {
        return ($this->price - $this->discount);
    }

    public function getProducer()
    {
        return "{$this->producerFirstName}" . " {$this->producerMainName}";
    }

    public function getSummaryLine()
    {
        $base = "{$this->title} ( {$this->producerMainName}, ";
        $base .= "{$this->producerFirstName} )";
        return $base;
    }

    function storeIdentityObject(IdentityObject $idobj)
    {
        // do something with the IdentityObject
    }
}