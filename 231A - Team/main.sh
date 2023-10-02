#!/bin/bash

read n
answer=0

for i in $(seq 1 $n); do
    read inp
    a="$(echo $inp | awk '{print $1}')"
    b="$(echo $inp | awk '{print $2}')"
    c="$(echo $inp | awk '{print $3}')"
    if [[ $a -eq 1 ]]; then
        if [[ $b -eq 1 ]] || [[ $c -eq 1 ]]; then
            answer=$((answer + 1))
        fi
    else
        if [[ $b -eq 1 ]]; then
            if [[ $c -eq 1 ]]; then
                answer=$((answer + 1))
            fi
        fi
    fi
done

echo $answer
