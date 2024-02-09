#!/bin/bash

read -p "Enter a number: " num
sum=0

while [ $num -gt 0 ]
do
    sum=$((sum + num))
    num=$((num - 1))
done

echo "$sum is the total"

