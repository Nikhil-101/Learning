#! /usr/bin/bash

echo "Hello World!!!"
name="Nikhil Dhiman"

echo The name is $name

echo -e "Whats your name? : \c"
read name

# display prompt and ask for input in same line or use '\c' with -e flag like in line 8
read -p "Enter name: " myname
echo My name is $myname
read -a names                   # for array of names

# passing arguments from cli    : like "./1st_script 1st_argument 2nd_argument"
echo $0 $1 $2                   # $0 will be the 'file_name'
# as an array
arr=("$@")
echo ${arr[0]} ${arr[1]}
echo $@
echo $#                         # shows number of argument passed
