#!/bin/bash

read -p "Enter a number: " num

length=${#num}
first_digit=${num:0:1}
last_digit=${num:length-1:1}

echo "First digit: $first_digit"
echo "Last digit: $last_digit"
