<?php
$data = file_get_contents('https://catfact.ninja/facts');
$data = json_decode($data, true);
echo "<pre>";
// print_r($data);
for ($i=0; $i <= 9; $i++) { 
    echo '<p>';
    echo $data['data'][$i]['fact'];
    echo '</p>';
}