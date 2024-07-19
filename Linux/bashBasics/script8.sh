# Arrays

cars=(bmw toyota tesla)
echo ${cars[@]}
unset cars[1]    # Deletes the index entry
cars[1]=Hyundai
echo ${cars[@]}
echo ${!cars[@]}    # Shows the indexes
echo ${#cars[@]}    # Shows the length of array
