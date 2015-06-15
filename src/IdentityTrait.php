<?php

trait IdentityTrait
{

    public function generateId()
    {
        return uniqid();
    }
}