#! /usr/bin/bash

count=10                            #just read all integral comparisions
condition=11
if [ $count -eq $condition ]                
then
    echo "The condition equals"
elif [ $count -lt $condition ]
then
    echo "The condition is greater than"
else
    echo "This condition is less than"
fi

# or use (( $count <= 10 )) if we have angular brackets and don't want to use '-le'

if (( $count != 9 ))
then
    echo "This equation is also True"
else
    echo "This condition is False"
fi

# check for files in bash using if statement
# Primary	    Meaning
# [ -a FILE ]	True if FILE exists.
# [ -b FILE ]	True if FILE exists and is a block-special file.
# [ -c FILE ]	True if FILE exists and is a character-special file.
# [ -d FILE ]	True if FILE exists and is a directory.
# [ -e FILE ]	True if FILE exists.
# [ -f FILE ]	True if FILE exists and is a regular file.
# [ -g FILE ]	True if FILE exists and its SGID bit is set.
# [ -h FILE ]	True if FILE exists and is a symbolic link.
# [ -k FILE ]	True if FILE exists and its sticky bit is set.
# [ -p FILE ]	True if FILE exists and is a named pipe (FIFO).
# [ -r FILE ]	True if FILE exists and is readable.
# [ -s FILE ]	True if FILE exists and has a size greater than zero.
# [ -t FD ]	True if file descriptor FD is open and refers to a terminal.
# [ -u FILE ]	True if FILE exists and its SUID (set user ID) bit is set.
# [ -w FILE ]	True if FILE exists and is writable.
# [ -x FILE ]	True if FILE exists and is executable.
# [ -O FILE ]	True if FILE exists and is owned by the effective user ID.
# [ -G FILE ]	True if FILE exists and is owned by the effective group ID.
# [ -L FILE ]	True if FILE exists and is a symbolic link.
# [ -N FILE ]	True if FILE exists and has been modified since it was last read.
# [ -S FILE ]	True if FILE exists and is a socket.
# [ FILE1 -nt FILE2 ]	True if FILE1 has been changed more recently than FILE2, or if FILE1 exists and FILE2 does not.
# [ FILE1 -ot FILE2 ]	True if FILE1 is older than FILE2, or is FILE2 exists and FILE1 does not.
# [ FILE1 -ef FILE2 ]	True if FILE1 and FILE2 refer to the same device and inode numbers.


# NOW do some File Test Operators