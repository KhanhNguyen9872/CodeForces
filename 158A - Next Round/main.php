<?php
 
/*
    https://codeforces.com/problemset/submission/158/225652762 (Web OUTPUT is 0? WTF, i don't know how to fix)
    PHP 8.1.7
*/
 
function input(){
    $f = fopen("php://stdin", "r");
    $str = fgets($f);
    fclose($f);
    return $str;
}
 
function nextround($n, $k) {
    if ($n < $k) {
        return 0;
    }
    $total = 0;
    $a = explode(" ", input());
    for($i = 0; $i < $n; $i++) {
        if (($a[$i] >= $a[$k - 1]) && ($a[$i] > 0)) {
            $total++;
        }
    }
    return $total;
}
 
$_str = explode(" ", input());
$n = $_str[0];
$k = $_str[1];
 
echo(nextround($n, $k));

?>