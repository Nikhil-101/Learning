#!/usr/bin/bash

# Functions & also local and global variables
up="Before"
pass="Function"

echo $up
echo $pass

showuptime(){
	local up=$(uptime -p | cut -c4-)
	local pass=$(uptime -s)
	cat << EOF
----
This machine has been up for $up
It has been running since $pass
====
EOF
}

showuptime

echo $up
echo $pass

showname(){
	echo "Hello $1"
}

showname ND
