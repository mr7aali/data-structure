#!/bin/bash

current_year=$(date +'%Y')

# Find the nearest leap year
nearest_leap_year=$(( (current_year + 3) / 4 * 4 ))

echo "Current year: $current_year"
echo "Nearest leap year: $nearest_leap_year"
