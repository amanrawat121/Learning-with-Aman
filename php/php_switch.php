<?php
// Create a switch statement that will output "Hello" if $color is "red", and "welcome" if $color is "green".
$color = "red";
switch($color){
    case "red":
    echo "hello";
    break;

    case "green":
    echo "welcome";
    break;
}
echo "<br>";
// passing marks example here from previous file

$pass = 33;

switch($pass){
    case $pass>33:
        echo "you are great";
        break;

    case $pass<33:
        echo "you are failed";
        break;


    case $pass = 33:
        echo "just passed";
        break;
}
?>