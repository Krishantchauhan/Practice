<?php
$host= "localhost";
$username = "username";
$password = "password";
$conn = new mysqli($host, $username, $password);
if ($conn->connect_error)
  die("Connection failed: " . $conn->connect_error);
$sql = "CREATE DATABASE testDB";
if ($conn->query($sql) === TRUE)
  echo "Database created successfully";
 else
  echo "Error creating database: " . $conn->error;
$sql = 'DROP DATABASE testDB';
$retval = mysql_query( $sql, $conn );

if(! $retval )
die('Could not delete database testDB: ' . mysql_error());

echo "Database deleted successfully\n";
$con->close();
?>
