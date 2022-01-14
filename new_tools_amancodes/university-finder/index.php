<?php
$country = "India";
$data = file_get_contents("http://universities.hipolabs.com/search?country=$country");
$data = json_decode($data, true);
echo "<pre>";
// print_r($data);
for ($i = 0; $i < count($data); $i++) {
    $uname = $data[$i]['name'];
    $state = $data[$i]['state-province'];
    $website = $data[$i]['web_pages'][0];
    echo "<table class=\"GeneratedTable\">
  <thead>
    <tr>
      <th>1</th>
      <th>2</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Name of University</td>
      <td>".$uname."</td>
    </tr>
    <tr>
      <td>State</td>
      <td>".$state."</td>
    </tr>
    <tr>
      <td>Website</td>
      <td>".$website."</td>
    </tr>
  </tbody>
</table>";
}
echo "
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
  padding: 3px;
}

table.GeneratedTable thead {
  background-color: #ffcc00;
}
</style>
";
