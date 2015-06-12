<?php

abstract class ShopProductWriter
{

    protected   $products = array();

    public function addProduct(ShopProduct $shopProduct)
    {
        $this->products[] = $shopProduct;
    }

    abstract public function write();
}