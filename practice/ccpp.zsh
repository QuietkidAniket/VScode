#!/bin/zsh

filename=$1

if [[ -f "$filename" ]]; then 
    g++ -std=c++20 "$filename" -o "${filename//.cpp/}"
    echo "Compiling $filename "
else
    echo "Error! $filename  not found"
fi

