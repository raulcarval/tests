<?php
$cars = array(
    array(
        'Estação 1',
        'endeço 1',

    ),
    array(
        'Estação 2',
        'endeço 2',
        
    ),
    array(
        'Estação 3',
        'endeço 3',
        
    ),
    array(
        'Estação 4',
        'endeço 4',
        
    )
);

foreach ($cars as $key => $value) {
    $car[$key]  = $value[0];
}

array_multisort($car, SORT_ASC, $cars);

var_dump($cars);


?>