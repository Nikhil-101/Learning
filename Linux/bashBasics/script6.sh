# Strings Processing
echo "Enter a string: "
read str1

if [ "$str1" = "abc" ]; then
	echo "String Matched"
else
	echo "String Unmatched"
fi

# Compare the length of the strings

if [ "$str1"  \< 'abc' ]; then
  echo "Entered String is smaller"
elif [ "$str1" \> "abc" ]; then
  echo "Entered String is bigger"
else
  echo "Strings are of same size"
fi

# Concatenate Strings
# echo "Enter 2nd string"
# read str2

# c=$str1$str2
# echo $c

# Capitalize letters
echo ${str1^}
echo ${str1^n}
echo ${str1^^}
