#! /usr/bin/bash
# 1st way
# also adding local variables
function hello(){
    local name=$1
    echo "Hello $name!!!"
}

# 2nd way
quit () {
    exit
}

is_file_exists() {
    local file="$1"
    [[ -f "$file" ]] && return 0 || return 1
}
if ( is_file_exists $1 )
then
    echo "File Found"
else
    echo "File Not Found"
fi

hello Nikhil
# is_file_exists name.txt
# quit
