<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $userid=$_POST['userid'];
}
   $query="SELECT * FROM students WHERE `stud_id`= $userid ";
    $run = mysqli_query($con,$query);
	$row=mysqli_fetch_array($run);
    if($row)
	{
        
		$_SESSION['stud_id']=$userid;
		
		$user_row=mysqli_fetch_array($run);
        echo "Welcome". "<br>";
        echo $row['stud_name']. "<br>";
    
       echo $row['branch']. "<br>";
    
       echo $row['cgpa'];
    }
    
    
    else{
        echo "Entered Id doesn't exist";
    }
   
	
?>