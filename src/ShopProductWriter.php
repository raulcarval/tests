<?php

class ShopProductWriter
{

    private $products = array();

    public function addProduct(ShopProduct $shopProduct)
    {
        $this->products[] = $shopProduct;
    }

    public function write()
    {
        $str = "";
        foreach ($this->products as $shopProduct) {
            $str .= "{$shopProduct->getTitle()}: ";
            $str .= $shopProduct->getProducer();
            $str .= " ({$shopProduct->getPrice()})\n";
        }
        print $str;
    }
}