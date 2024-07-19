#!/usr/bin/bash

FIRST_NAME=Nikhil
LAST_NAME=Dhiman
showgreetings(){
	local FIRST_NAME=Harsh
	local SECOND_NAME=Dhiman
	echo Hello $FIRST_NAME $LAST_NAME \& $1 $2
}
showgreetings $1 $2

# Unlimited amount of argument passing to script through terminal
# args=("$@")
# echo ${args[0]} ${args[1]} ${args[2]} ${args[3]}
: 'for arg in ${args[@]}
do
	echo $arg
done'

# Print all the input parameters for script
echo $@

# Print the number of input parameters passed
echo $#

# if else statement
if [ $3 = y ]; then  	   # Use (( )) when arithematic is needed
	echo "Permission Granted"
elif [ $3 = n ]; then
	echo "Permission Required"
else
	echo "Permission Denied"
fi

# Case statement
case $3 in
	y | Y)
		echo "Permission Granted"
		;;
	n | N)
		echo "Permission Required"
		;;
	*)
		echo "Permission Denied"
		;;
esac

# AND OR Operators
AGE=$4
# if [ "$AGE" -gt 18 ] && [ "$AGE" -lt 99 ]; then
if (( $AGE > 18 )) && (( $AGE < 99 )); then
	echo "Eligible"
else
	echo "Not Eligible"
fi

# Arrays
ONE_ARRAY=(one two three four)
echo $ONE_ARRAY
echo ${ONE_ARRAY[@]}

# For loops
for item in ${ONE_ARRAY[@]}
do
	echo $item
done

for num in {0..10..2}
do
	echo $num
done

for (( i=0; i<10; i++ ))
do
	echo $i
done

# While loop
number=20
while [ $number -gt 10 ]
do
	echo $number
	number=$(( number-1 ))
done

# Until loops
# It is similar to while loop. Just the loop will go on until the statement in the bracket is true where as in while it goes on until the statement becomes false

# Break & Continue
for num in {0..10}
do
	if (( $num == 4 )) || (( $num == 7 ))
	then
		echo "Skipped"
		continue
	elif (( $num > 8 ))
	then
		echo "Break"
		break
	fi
	echo $num
done

endgreeting(){
	echo "Bye $FIRST_NAME $LAST_NAME"
}
endgreeting
