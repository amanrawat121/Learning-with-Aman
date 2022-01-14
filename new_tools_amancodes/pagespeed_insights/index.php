<?php
$key = "AIzaSyDYnRTv76tcxHplYHi33CfV8TeDLt9Dwb0";
$website = "google.com";
$baseURL = file_get_contents("https://www.googleapis.com/pagespeedonline/v5/runPagespeed?url=https://$website&key=$key");
$baseURL = json_decode($baseURL, true);
echo "<pre>";
print_r($baseURL);