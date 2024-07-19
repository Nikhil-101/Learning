#!/usr/bin/bash

# Conditional Operators

if [ $1 = "Nikhil" ]; then
	echo "Welcome Back $1"
elif [ ${1} = "help" ]; then
	echo "Enter your name"
else
	echo "Permission Denied"
fi

