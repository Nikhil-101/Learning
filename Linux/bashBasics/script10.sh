# Files & Directory

# make directories
mkdir -p tmpDir     # the flags ignore the errors

# check if directory exists
echo -n "Enter folder name to check: "
read folderName
if [ -d  $folderName ]; then
  echo "$folderName exists"
else
  echo "$folderName does not exists"
fi

# Create file
touch tmpFile

# Check if files exists
checkFile(){
  echo -n "Enter file name to check: "
  read fileName
  if [[ -f $fileName ]]; then
  echo "$fileName exists"
  return 0
  else
    echo "$fileName does not exists"
    return 1
  fi
}

# Append text to file
echo "this text is to append to the file" >> tmpFile

# This part is extra trying to call function to check if file exists
checkFile
echo $?
if (( $?  )); then
  echo "Success"
else
  echo "Fail"
fi

# Remove file & Folders

rm tmpFile
rm -r tmpDir    # here flag means recursively... i.e. if the dir is not empty

