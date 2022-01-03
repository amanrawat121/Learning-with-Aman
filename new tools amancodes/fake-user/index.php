<?php
$data = file_get_contents("https://randomuser.me/api/");
$data = json_decode($data, true);
echo "<pre>";
$shortcode = $data['results'][0];
$tname = $shortcode['name']['title'];
$fname = $shortcode['name']['first'];
$lname = $shortcode['name']['last'];
$gender = $shortcode['gender'];
$addressnum = $shortcode['location']['street']['number'];
$addressname = $shortcode['location']['street']['name'];
$addresscity = $shortcode['location']['city'];
$addressstate = $shortcode['location']['state'];
$addresscountry = $shortcode['location']['country'];
$addresspost = $shortcode['location']['postcode'];
$lat = $shortcode['location']['coordinates']['latitude'];
$long = $shortcode['location']['coordinates']['longitude'];
$timezone = $shortcode['location']['timezone']['offset'];
$timezonedesc = $shortcode['location']['timezone']['description'];
$email = $shortcode['email'];
$phone = $shortcode['phone'];
$cell = $shortcode['cell'];
$dob = $shortcode['dob']['date'];
$age = $shortcode['dob']['age'];
$picture = $shortcode['picture']['thumbnail'];
// print_r($data);
echo "
<!DOCTYPE html>
<html lang=\"en\">
   <head>
      <meta charset=\"UTF-8\">
      <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
      <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
      <title>Fake data generator</title>
   </head>
   <body>
      <table class=\"GeneratedTable\">
         <thead>
            <tr>
               <th>Fields</th>
               <th>Details</th>
            </tr>
         </thead>
         <tbody>
            <tr>
               <td>Name</td>
               <td>".$tname.". ".$fname." ".$lname."</td>
            </tr>
            <tr>
               <td>Gender</td>
               <td>".$gender."</td>
            </tr>
            <tr>
               <td>Address</td>
               <td>".$addressnum.", ".$addressname.", ".$addresscity." ".$addressstate.", ".$addresscountry.", ".$addresspost."</td>
            </tr>
            <tr>
               <td>Coordinates</td>
               <td>".$lat.", ".$long."</td>
            </tr>
            <tr>
               <td>Timezone</td>
               <td>".$timezone.", (".$timezonedesc.")</td>
            </tr>
            <tr>
               <td>Email</td>
               <td>".$email."</td>
            </tr>
            <tr>
               <td>Date of Birth/Age</td>
               <td>".$dob." (".$age." Years)</td>
            </tr>
            <tr>
               <td>Phone Number</td>
               <td>".$phone."</td>
            </tr>
            <tr>
               <td>Cell</td>
               <td>".$cell."</td>
            </tr>
            <tr>
               <td>Picture</td>
               <td><img src='$picture'</td>
            </tr>
         </tbody>
      </table>
      <style>
         table.GeneratedTable {
         width: 100%;
         background-color: #ffffff;
         border-collapse: collapse;
         border-width: 2px;
         border-color: #ffcc00;
         border-style: solid;
         color: #000000;
         }
         table.GeneratedTable td, table.GeneratedTable th {
         border-width: 2px;
         border-color: #ffcc00;
         border-style: solid;
         padding: 13px;
         }
         table.GeneratedTable thead {
         background-color: #ffcc00;
         }
      </style>
   </body>
</html>

";
