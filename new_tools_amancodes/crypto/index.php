<?php
$data = file_get_contents("https://api.coindesk.com/v1/bpi/currentprice.json");
$data = json_decode($data, true);
echo "<pre>";
// print_r($data);
$usd_rate = $data['bpi']['USD']['rate'];
$gbp_rate = $data['bpi']['GBP']['rate'];
$eur_rate = $data['bpi']['EUR']['rate'];
echo "Conversion of Bitcoin to USD is: ";
echo "$usd_rate<br>";
echo "Conversion of Bitcoin to GBP is: ";
echo "$gbp_rate<br>";
echo "Conversion of Bitcoin to EUR is: ";
echo "$eur_rate<br>";
echo "Data refreshed every 2 minutes";