<?php
define("boy", "Aman is a good boy");
echo boy;
echo "<br>";

// php constant arrays
define("cars", ["maruti", "hyundai", "toyota", "suzuki"]);

echo cars[3];


// constants are global
echo "<br>";
function test() {
echo boy;
}
test();
?>