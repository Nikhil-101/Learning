#! /usr/bin/bash

echo $1
if [ -e $1 ]     # check for file existence (comes under )
then
    echo "File Found"
    echo "Press 'Ctrl + D' to Save the typed text"
    cat >> $1
    echo ''
else
    echo "File Not Found"
    read -p "Do you want to create '$1' file? " a
    if [ "$a" == 'y' ] || [ "$a" == 'Y' ]               # or if [[ "$a" == 'y' || "$a" == 'Y' ]]
    then
        echo "Press 'Ctrl + D' to Save the typed text"
        cat >> $1
        echo ''
    else
        echo "Exiting..."
    fi
fi
