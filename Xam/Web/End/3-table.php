<?php
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "newDB";
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error)
  die("Connection failed: " . $conn->connect_error);
$sql = "CREATE TABLE employees(
        id INT(2) PRIMARY KEY,
        firstname VARCHAR(30) NOT NULL,
        lastname VARCHAR(30) NOT NULL,
        email VARCHAR(50)
        )";
if ($conn->query($sql) === TRUE)
  echo "Table employees created successfully";
else
  echo "Error creating table: " . $conn->error;
$d=’DROP Table employee’;
$retval = mysql_query( $sql, $conn );
if(! $retval )
  die('Could not delete database testDB: ' . mysql_error());
echo "Database deleted successfully\n";
$con->close();
?>
