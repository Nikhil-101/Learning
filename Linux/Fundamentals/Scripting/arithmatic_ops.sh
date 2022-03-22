#! /usr/bin/bash

# Floating Point arithematic operation
num1=2
num2=3

echo $(( num1 + num2 ))


# on decimal numbers

echo "20.5+5" | bc          # bc -> basic calculator
num3=20.5
num4=5
echo "$num3+$num4" | bc


