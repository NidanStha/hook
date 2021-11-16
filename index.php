

<body>
    <form method="post" action="index.php">
        <input type="text" name="user" />
        <input type="submit" name="sub" />
    </form>

</body>

<?php
    if(isset($_POST['sub'])){
		$user = $_POST['user'];
            echo "hoo";
        //touch('test.txt'); //create file
        //unlink('test.txt');   //remove file

        $f = fopen("test.txt","a");
        fwrite($f, "\n" . $user);
        fclose($f);
    }

?>