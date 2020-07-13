<?php
session_start();
include('db.php');

if(isset($_POST['submit_id']))
{
	$st_id = $_POST['student_id'];


$query  = "SELECT * FROM  `students` WHERE `Gr_No`='$st_id'	";

$run = mysqli_query($con,$query);

$row = mysqli_num_rows($run);

if($row==1)
	{
		$_SESSION['Gr_No']=$st_id;
		$user_row = mysqli_fetch_assoc($run);
		echo "Login Sucsessful !!!"."<br>";
		echo "<br>"."Welcome"."<br>";
		//echo "Gr.No.: ".$user_row['Gr_No']."<br>";
		echo "Name: ".$user_row['name']."<br>";
		echo "Branch: ".$user_row['branch']."<br>";
		echo "Year: ".$user_row['year']."<br>";
		echo "C.G.P.A.: ".$user_row['cgpa']."<br>";
		
		
	}
	else
	{
		echo "Login Unsuccessful";
		echo mysqli_error($con);
		
	}


}
?>

		