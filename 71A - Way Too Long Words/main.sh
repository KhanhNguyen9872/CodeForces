#!/bin/bash

read size

for i in $(seq 1 $size); do
    read s
    if [[ $(printf "$s" | wc -c) -gt 10 ]]; then
        echo "${s:0:1}$(($(printf "$s" | wc -c) - 2))${s:0-1}"
    else
        echo $s
    fi
done