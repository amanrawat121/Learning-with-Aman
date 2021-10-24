<?php
echo "php functions are the core power of php.<br>";
// following is a basic function structure in php

function tip()
{
    // some code to be executed.
    echo "functions name are not case sensitive<br>";
    echo nl2br("just write the function\r\n name after you have declared it to call a function, just like done below (see the code for reference");
}
tip();

echo "<br>";

function hello()
{
    echo "hello aman!";
}

hello();

// function to display all family members name using function arguments
echo "<br>";
function familyname($rawat)
{
    echo "My name is $rawat";
}
familyname("aman<br>");
familyname("vansh<br>");
familyname("suman<br>");
familyname("vijay<br>");
familyname("manish<br>");

function color($color){
    echo "my favourite color is $color";
}
color("green<br>");
color("blue<br>");
color("orange<br>");
color("purple<br>");
color("pink<br>");
color("violet<br>");
color("white<br>");
color("black<br>");
color("red<br>");
color("neon<br>");

// which family member like which color

function fav($name, $color){
    echo "My name is $name and i like $color color";
}

fav("aman", "green");
echo "<br>";
fav("arun", "blue");
echo "<br>";
fav("rishabh", "red");
echo "<br>";
fav("krishan", "orange");
echo "<br>";
fav("ashish", "pink");
echo "<br>";
fav("rahul", "purple");
echo "<br>";
fav("kavita", "black");
echo "<br>";
fav("komal", "cyan");
echo "<br>";

echo "Since PHP is a loosely typed language, it will automatically assign data types"



?>