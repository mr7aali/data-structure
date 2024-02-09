#!/bin/bash

read -p "Enter the current year: " current_year

function is_leap_year() {
    year=$1
    if [ $((year % 4)) -eq 0 ] && [ $((year % 100)) -ne 0 -o $((year % 400)) -eq 0 ]; then
        return 0  
    else
        return 1  
    fi
}

next_year=$current_year
prev_year=$current_year

while true; do
    if is_leap_year $next_year; then
        echo "The nearest leap year is: $next_year"
        break
    elif is_leap_year $prev_year; then
        echo "The nearest leap year is: $prev_year"
        break
    else
        ((next_year++))
        ((prev_year--))
    fi
done
