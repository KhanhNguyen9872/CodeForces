<?php
/*
    https://codeforces.com/problemset/submission/71/225065457
    PHP 8.1.7 - 46 ms - 24 KB
*/

$file = fopen('php://stdin', 'r');
$size = fgets($file);

for($i = 0; $i < $size; $i++) {
    $s = trim(fgets($file));
    if(strlen($s) > 10) {
        echo($s[0] . strlen($s) - 2 . $s[strlen($s) - 1] . "\n");
    } else {
        echo($s . "\n");
    }
}

fclose(($file));
?>