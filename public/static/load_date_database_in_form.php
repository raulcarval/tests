<?php

$conn = new PDO('mysql:host=localhost;dbname=test', 'root', '');
$sql = 'SELECT * FROM post where id = 1';

$result = $conn->query($sql, PDO::FETCH_OBJ);

foreach ($result as $row) {
    	echo '<input type="text" value="'.$row->title.'">';
}

?>
