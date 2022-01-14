<?php
error_reporting(0);
ini_set('display_errors', 0);
$name = $_GET['name'];
$data = file_get_contents("https://api.genderize.io/?name=$name");
$data = json_decode($data, true);
echo "<pre>";
// print_r($data);

echo "
<form method=\"GET\">
  <input type=\"text\" id=\"name\" name=\"name\"><br><br>
  <input type=\"submit\" value=\"Submit\">
</form>
";
echo "Name: $name<br>";
echo "Gender: ".$data['gender']."<br>";
echo "Probability: ".$data['probability']."<br>";