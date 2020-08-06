<?php
session_start();
include('db.php');
if(isset($_POST['submit']))
{
    $id = $_POST['stud_id'];

    $query = "SELECT * FROM `user` WHERE `stud_id` = '$id'";
    $run = mysqli_query($con,$query);
    $row = mysqli_num_rows($run);
    if($row == 1)
    {
        $_SESSION['stud_id'] = $id ;
        echo "Login Sucessfull". "<br>";
        $user_row = mysqli_fetch_assoc($run);
        echo "Welcome ".$user_row['stud_name']. "<br>";
        echo "Student Id is : ".$user_row['stud_id']. "<br>";
        echo "Student Name is : ".$user_row['stud_name']. "<br>";
        echo "Student branch i : ".$user_row['branch']. "<br>";
        echo "Student CGPA is : ".$user_row['cgpa']. "<br>"; 
    }
    else{
        echo "Login Unsuccessful" ;
    }
}
?>