# Functions

operatingsystem(){
  whattosay="i love windows"    # if local keyword is used the value will not change by calling function
  echo "Hello $1"
}

whattosay="i love linux"
echo $whattosay

operatingsystem Nikhil
echo $whattosay
