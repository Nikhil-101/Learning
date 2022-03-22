#! /usr/bin/bash

var=10
readonly var

var=11                      #can't overrite readonly variable
echo "$var"

function1() {
    echo "Hello"
}

readonly -f function1

function1() {               # can't override readonly function
    echo "Hello World!!!"
}

readonly                    # shows all the readonly variables
readonly -f                 # shows all the readonly functions