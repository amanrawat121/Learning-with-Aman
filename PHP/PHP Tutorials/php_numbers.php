<?php

echo "There are mainly following types of numbers in php<br>
1. Integer: Any non decimal number, positibve or negative is an integer. for example 123, -644<br>
2. Float: Any decimal integer is known as float for example -3.65, 3.545<br>
3. NaN: It stands for Not A Number<br>
4. Infinity: Any number larger than php_float_max is considered infinity<br><br><br>";

echo "Maximum value for a php integer is ".PHP_INT_MAX."<br><br>";
echo "Minimum value for a php integer is ".PHP_INT_MIN."<br><br>";
echo "Maximum value for a php float is ".PHP_FLOAT_MAX."<br><br>";
echo "Minimum value for a php float is ".PHP_FLOAT_MIN."<br><br>";

# following to check if following variable is a string
$x = 10;
echo "".var_dump(is_string($x))."<br>";
echo "".var_dump(is_float($x))."<br>";
echo "".var_dump(is_finite($x))."<br>";

?>