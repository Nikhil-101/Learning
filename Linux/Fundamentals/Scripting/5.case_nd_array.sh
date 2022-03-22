#! /usr/bin/bash

read -p "Write an expression: " expr

case $expr in
    [a-z] )
        echo "Entered expression is $expr and is between a and z" ;;
    [A-Z] )
        echo "Entered expression is $expr and is between A and Z" ;;
    [1-9] )
        echo "Entered expression is $expr and is between 1 and 9" ;;
    ? )
        echo "Entered expression is $expr and is special character" ;;
    * )
        echo "Entered expression is $expr and is unknown" ;;
esac

# Representing an Array

names=("Nikhil" "Abc" "bca")
name[3]="Saurabh"           # Adds the element to the array
unset name[2]               # Removes the value of arrat at given index
echo "${names[@]}"          # Print the value in the array
echo "${!names[@]}"         # Print the indexes of the array values
echo "${#names[@]}"         # Print the length of the array
