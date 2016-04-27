<?php
namespace Di;

class User
{
  function __construct($storage)
  {
    $this->storage = $storage;
  }

  // ...
}