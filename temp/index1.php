
<?php
$conn = mysqli_connect("localhost", "root", "", "music");
echo "<link rel=\"stylesheet\" href=\"https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/4.3.1/css/bootstrap.min.css\" integrity=\"sha512-tDXPcamuZsWWd6OsKFyH6nAqh/MjZ/5Yk88T5o+aMfygqNFPan1pLyPFAndRzmOWHKT+jSDzWpJv8krj6x1LMA==\" crossorigin=\"anonymous\" referrerpolicy=\"no-referrer\" />";
if ($result = mysqli_query($conn, "SELECT * FROM `music` ORDER BY RAND() LIMIT 100")) {
    while ($row = mysqli_fetch_array($result)) {
        echo "<ul><li><a type=\"button\" class=\"btn btn-primary\" href = \"/\">".$row['music']."</a></li></ul>";
        echo "<br>";
    }  
}
mysqli_close($conn);

?>
<IfModule mod_rewrite.c>
RewriteEngine on
RewriteCond %{REQUEST_FILENAME} !-d
RewriteRule ^(.*)/$ /watch/$1 [L,R=301]

</IfModule>