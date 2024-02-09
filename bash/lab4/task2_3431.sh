#!/bin/bash

read -p "Enter the value of n: " n

a=0
b=1

echo -n "Fibonacci series up to $n terms: "

for ((i = 1; i <= n; i++)); do
    echo -n "$a "
    temp=$((a + b))
    a=$b
    b=$temp
done

echo

