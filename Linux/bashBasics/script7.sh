# Arithematic Operations

num1=25
num2=5

echo $(( num1 + num2))
echo $( expr $num1 + $num2)


# Declare cmd
declare -p    # Shows all the declared variables
declare myName=Nikhil

declare -r myDOB=1997   # This is a Read-Only variable

echo $myName
echo $myDOB
