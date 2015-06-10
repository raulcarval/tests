<?php

class AddressManager
{

    private $addresses = array(
        "209.131.36.159",
        "74.125.19.106"
    );

    function outputAddresses($resolve)
    {
        foreach ($this->addresses as $address) {
            print $address;
            if (is_bool($resolve)) {
                print " (" . gethostbyaddr($address) . ")";
            }
            print "\n";
        }
    }
}
 