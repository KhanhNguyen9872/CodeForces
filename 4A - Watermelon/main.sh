#!/bin/bash

read w

if [[ $((w % 2)) == 0 ]] && [[ $w -gt 2 ]]; then
    echo "YES"
else
    echo "NO"
fi
