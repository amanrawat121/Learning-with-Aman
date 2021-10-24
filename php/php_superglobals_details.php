<?php
echo nl2br("<h1>A superglobal is a variable that is always available to use in any scope</h1>\r\n Check the code for reference");
echo "<br>";

// we will use $globals superglobal here

$a = 17;
$b = 23;

function add() {
    $GLOBALS['z'] = $GLOBALS['a'] + $GLOBALS['b'];
}

add();
echo $z;

// here we can echo z directly from outside of function add because we have defind a and b as a global variable
// echo $_SERVER['PHP_SELF'];

?>