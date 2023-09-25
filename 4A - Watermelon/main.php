<?php
// https://codeforces.com/problemset/submission/4/225041775
// PHP - 92 ms - 16 KB

$file = fopen('php://stdin', 'r');
$w = fgets($file);
fclose($file);

if(($w % 2 == 0) && ($w > 2)) {
    echo("YES");
} else {
    echo("NO");
}

?> 