#! /usr/bin/bash
# -------------------------------------------------------------------------------------------------------------
# WHILE loops && sleep cmd
value=5
while [ 8 -gt $value ]              # or while (( 8 > $value ))
do
    echo "$value"
    value=$(( value + 1 ))          # or (( n++ ))
    sleep 1                         # input is in seconds
    # windows-terminal &            # opens terminal in linux
done

# reading file contents with while loops
# 1st way -- input redirection
while read p
do
    echo $p
done < loops.sh
# 2nd way  -- read file content into one variable
cat loops.sh | while read p
do
    echo $p
done
# 3rd way (BEST way)  --  usually interperate backslashes in a file
while IFS=' ' read -r line
do
    echo $line
done < loops.sh

# -------------------------------------------------------------------------------------------------------------
# until loops  -- it gets executed when the condition within until is false which is opposite to while loop
until [ "$value" -gt 10 ]
do
    echo $value
    (( value++ ))
done

# -------------------------------------------------------------------------------------------------------------
# for loops
# 1st way
for var in {1..10..2}          # or for var in 1 2 3 4 5
do
    echo $var
done
# 2nd way
for (( i=0 ; i<10 ; i++ ))
do
    echo $i
done
# 3rd way  -- with respect to files & commands
for cmd in ls pwd date
do
    echo "--------$cmd--------"
    $cmd
done
# lists all the files & directory containing current directory
for item in *
do
    echo $item
done

# -------------------------------------------------------------------------------------------------------------
# SELECT loops  -- used for generating easy menues & is done automatically
select name from Nikhil Nitin Himanshu
do
    echo "$name selected"
done
# using case in select
select name from Nikhil Nitin Himanshu
do
    case $name in
        mark )
            echo "mark selected" ;;
        * )
            echo "Not in the list" ;;
    esac
done

# -------------------------------------------------------------------------------------------------------------
# break & continue

for (( i=0 ; i<10 ; i++ ))
do
    if [ "$i" -gt 5 ]
    then
        break
    elif [[ "$i" -eq 2 | "$i" -eq 4 ]]
    then
        continue
    fi
    echo "$i"
done
