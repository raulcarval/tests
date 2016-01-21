<?php
namespace Classes;
class Mailer
{

    function doMail($product)
    {
        print "mailing ({$product->name})\n";
    }
}