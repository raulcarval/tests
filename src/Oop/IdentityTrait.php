<?php
namespace Classes;
trait IdentityTrait
{

    public function generateId()
    {
        return uniqid();
    }
}