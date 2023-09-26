<?php

/*
    https://codeforces.com/problemset/submission/231/225195209
    PHP 8.1.7 - 60 ms - 28 KB
*/

function input($file) {
    return trim(fgets($file));
}
$file = fopen('php://stdin', 'r');
$answer = 0;
$n = input($file);

for($i = 0; $i < $n; $i++) {
    $_str = explode(' ', fgets($file));
    $a = $_str[0];
    $b = $_str[1];
    $c = $_str[2];
    if($a == 1) {
        if (($b == 1) || ($c == 1)) {
            $answer++;
        }
    } else if ($b == 1) {
        if ($c == 1) {
            $answer++;
        }
    }
}

echo($answer);
fclose($file);
?>