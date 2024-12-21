<?php

require_once 'connection.php';

$conn = getConnection();

$firstname = $_POST["firstname"];
$lastname = $_POST["lastname"];
$fathername = $_POST["fathername"];
$dob = $_POST["dob"];
$tel = $_POST["tel"];
$highschool = $_POST["highschool"];
$address = $_POST["address"];
$level = $_POST["level"];
$year = $_POST["year"];
$email = $_POST["email"];
$degree = $_POST["degree"];

$sql = "INSERT INTO students (firstname, lastname, fathername, dob, tel, highschool, address, level, year, email, degree) VALUES ('$firstname', '$lastname', '$fathername', '$dob', '$tel', '$highschool', '$address', '$level', '$year', '$email', '$degree')";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>