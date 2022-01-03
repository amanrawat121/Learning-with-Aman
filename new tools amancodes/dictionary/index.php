<?php
$keyword = "power";
$data = file_get_contents("https://api.dictionaryapi.dev/api/v2/entries/en/$keyword");
$data = json_decode($data, true);
echo "<pre>";
print_r($data);
$origin = $data[0]['origin'];
$partofspeech = $data[0]['meanings'][0]['partOfSpeech'];
$definition = $data[0]['meanings'][0]['definitions'][0]['definition'];
echo "Name: $keyword<br/>";
echo "$origin<br/>";
echo "$partofspeech<br/>";
echo "$definition<br/>";