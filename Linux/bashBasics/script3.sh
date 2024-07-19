#!/usr/bin/bash

case ${1} in
	Nikhil | admin)
		echo "Hello there"
		;;
	help)
		echo "Enter your name"
		;;
	*)
		echo "Permission Denied"
		;;
esac

# Create an array
MY_ARRAY=(one two three four)
echo $MY_ARRAY
echo ${MY_ARRAY[@]}

# For loop
for item in ${MY_ARRAY[@]}
do 
	echo -n $item | wc
done
