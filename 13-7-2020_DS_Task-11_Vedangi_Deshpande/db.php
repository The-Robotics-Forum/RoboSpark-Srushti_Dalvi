<?php

$con = mysqli_connect('localhost:3307','root','admin123','robospark'); 
if(!$con)
{
    echo "connection error".mysqli_connect_error();
}
else{
    echo "<h3> Database connection success</h3>";
}
?>
