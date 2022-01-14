<?php
echo "Arrays store multiple values for a single variable in PHP";
echo "<br>";
echo "Arrays are created using function array()";
echo "<br>";
echo "Index always start from zero in an array";
echo "<br>";
echo "the example below are indexed arrays, a common type of array";
echo "<br>";
echo "<br>";
echo "<br>";

// example for an array
$car = array("toyota", "mercedes", "audi", "thar", "jaguar", "land rover", "range rover", "maruti", "skoda", "BMW");
echo "My favourite car is $car[1], $car[5], and $car[7]";
echo "<br>";
echo "<br>";
echo "<br>";

// random car
$car = array("toyota", "mercedes", "audi", "thar", "jaguar", "land rover", "range rover", "maruti", "skoda", "BMW");
shuffle($car);
echo "<h2>Now you will get a random car on every refresh of this page so my favourite car is $car[0]<h2>";
echo "<br>";
echo "There are " . count($car) . " cars in my collection currently. This is called length of an array";

// looping through indexed array
$car = array("toyota", "mercedes", "audi", "thar", "jaguar", "land rover", "range rover", "maruti", "skoda", "BMW");
$no = count($car);
echo "<br>";
for ($i = 0; $i < $no; $i++) {
  echo $car[$i];
  echo "<br>";
}

// we can also do this as following;
foreach ($car as $a) {
  echo $a;
  echo "<br>";
}

// third example for looping through an array
$num = array("11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24",);
$number = count($num);
foreach ($num as $a) {
  echo $a++;
  echo "<br>";
}

// looping with for loop

for ($i = 0; $i < $number; $i++) {
  echo $num[$i];
  echo "<br>";
}
for ($i = 0; $i < $number; $i++) {
  echo $num[$i];
  echo "<br>";
}

// associative array associate a value
echo "<br>";
$age = array("aman" => "20", "arun" => "25");
echo "age of Arun is " . $age["arun"] . "";
echo "<br>";
// looping through associative array

$age = array("aman" => "20", "arun" => "25", "rishabh"=>"24", "krishan"=>"10");

foreach ($age as $name => $value) {
echo "The age of ".$name." is ".$value."";
echo "<br>";
}


// Multidimensional array means an array inside an array
// simplest Multidimensional array is a two dimensional array created below

$car = array(
array("volvo",22,18),
array("skoda",25,11),
array("jaguar",53,34),
array("land rover",21,6),
);

// a pretty easy way to do above is
// just uncommment the line below and you will see a formatted code
// $car = array(array("volvo"), array("skoda"), array("BMW"));

echo "".$car[0][1]." units of ".$car[0][0]." has been sold and ".$car[0][2]." units are left.";
echo "<br>";
echo "".$car[1][1]." units of ".$car[1][0]." has been sold and ".$car[0][2]." units are left.";
echo "<br>";
echo "".$car[2][1]." units of ".$car[2][0]." has been sold and ".$car[0][2]." units are left.";
echo "<br>";
echo "".$car[3][1]." units of ".$car[3][0]." has been sold and ".$car[0][2]." units are left.";
echo "<br>";

// sorting indexed array we will use car example

$car = array("toyota", "mercedes", "audi", "thar", "jaguar", "land rover", "range rover", "maruti", "skoda", "bmw");
sort($car);
foreach ($car as $name) {
echo $name++;
echo "<br>";
}

echo "<br>";
echo "<br>";

// reverse sorting
$car = array("toyota", "mercedes", "audi", "thar", "jaguar", "land rover", "range rover", "maruti", "skoda", "bmw");
rsort($car);
foreach ($car as $name) {
echo $name++;
echo "<br>";
}


// sorting associative array

echo "we use asort function for sorting with value, ksort for sorting with key, Sort Array (Descending Order), According to Value - arsort(), Sort Array (Descending Order), According to Key - krsort()
";