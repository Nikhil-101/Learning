#!/usr/bin/env bash

echo "Hello World"

name='Nikhil'

name2=''

echo "Hey, $name"
echo "Hey, ${name2:-"Anonymous"}"

diff <(pwd) <(pwd)
# treat it as if 2 files are passing

echo $((3+4))

echo $0 $1 ${2:-"No arg2"}

if [[ $1 > 5 ]]; then
 echo "Greater"
elif [[ $1 < 5 ]]; then
 echo "Smaller"
else
 echo "Equal"
 exit 0
fi

val="a"
#echo [[ "$val" == "a" ]]

for i in {1..10}; do
 echo "$i"
done

my=(1 2 3 4 5)
for val in $my[@]; do
 echo "$val"
done
