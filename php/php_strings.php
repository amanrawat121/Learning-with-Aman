<?php
$len = "I love my village";
$boy = "I am a very good boy";
$lorem = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Accusantium nisi minus quod asperiores repellat vero, ipsa, quo molestias a consequatur corporis veniam quasi animi amet ducimus aliquam quas eum dolores.";
$aman = "Aman is a very good boy.";
echo "Following outputs will be provided automatically string functions. No manual work😉<br>";
echo "The length of charaters in 'I love my village' is ".strlen($len)."<br>";
echo "The length of Characters in 'I love my family' is ".strlen("I love my family")."<br><br><br>";
echo "The length of characters in the sentence '$lorem' is ".strlen("$lorem")."<br><br><br>";
echo "Count if you don't trust!<br><br>";

echo "---------------------================-----------------====================----------<br><br>";

echo "Now I'll tell you about word counting function of PHP<br><br>";

echo "Total Count for Words in the sentence 'I am a very good boy' is ".str_word_count($boy)."<br><br><br>";

echo "Total Count for words in sentence '$lorem' is ".str_word_count($lorem)."<br><br><br>";


echo "---------------------Reversing a given string==============----------<br><br>";


echo "I'll Revert the characters of a given string<br><br><br>";

echo "After reversing ".$lorem.", we will get something like ".strrev($lorem)."<br><br>";

echo "After reversing the name  Narendra Modi, I'll get something like ".strrev("Narendra Modi")."<br><br>";

echo "After reversing my name, I'll get something like ".strrev("Aman Rawat")."<br><br>";

echo "---------------------Finding position of A particular word in a long sentence==============----------<br><br>";

echo "Position of 'ipsa' in sentence '$lorem' is ".strpos("$lorem", "ipsa")." <br><br>";
echo "Position of 'veniam' in sentence '$lorem' is ".strpos("$lorem", "veniam")." <br><br>";
echo "Position of 'at' in sentence '$lorem' is ".strpos("$lorem", "at")." <br><br>";


echo "---------------------Replacing the word with another word in a given sentence==============----------<br><br>";


echo "On changing 'lorem' with Aman in sentence '$lorem', I'll get something like this ".str_replace("Lorem", "Aman", "$lorem")."<br><br><br>";

echo "On changing 'Aman' with Bobby in sentence '$aman', I'll get something like this ".str_replace("Aman", "Bobby", "$aman")."<br><br>";

echo "---------------------Important String functions==============----------<br><br>";

# only providing main php string functions, there are many😉
echo "Converting $aman to hex using bin2hex gives ".bin2hex("$aman")."<br><br><br><br>";
echo "Calcualate '$lorem' md5 hash using md5 gives ".md5("$lorem")."<br><br><br><br>";
echo "Calcualate '$aman' SHA-1 hash using sha1 gives ".sha1("$lorem")."<br><br><br><br>";
echo "Calculate '$lorem' hash using crypt gives ".crypt("$lorem", "$lorem")."<br><br><br><br>";
echo "Converting '$aman' to uppercase using strtoupper gives ".strtoupper("$aman")."<br><br><br><br>";
echo "Converting ".strtoupper("$aman")." to lowercase using strtolower gives ".strtolower("$aman")."<br><br><br><br>";
echo "Converting first words of each word of '$lorem' to Capital using ucwords gives ".ucwords("$lorem")."<br><br><br><br>";


?>