#!/usr/bin/bash
echo "Hello...How are you!!!"

# Multi-Line Comments
: '
Hello this
is a
multiline comment'

FIRST_NAME=Nikhil
echo "What is your last name???"
read LAST_NAME
echo "The name is $FIRST_NAME $LAST_NAME."

# Positional Arguments
echo "Hello $1 $2"

# Piping
ll /usr/bin | grep bash

# Input/Output Redirection Using <, <<, <<<
# To avoid sending data as argument but rather as redirection to a cmd
# Here it will hide printing file name passed as argument with another method
 "wc < fileName.fileExtension"

# To write a cmd with multiple lines within terminal
# write eol or anything but also end with the same word to sent the cat cmd with all the "something" written data
# "cat << eol
# > something
# > something
# > eol"
# or use it to print out comments or anything from script to the terminal or in the output of the script

# To send a string where only file or directory is accepted
wc <<< "Hello how are you"

# Test Operators
[ hello = hello ]  [ 0 = 1 ]  [1 -eq 0] # also is same
# then do
echo $0 	# should give 0 if true but 1 if false

