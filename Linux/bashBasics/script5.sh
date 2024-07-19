# Type anything in the terminal and save it in the file
# cat > tmp.txt

# Read lines using stdin
while read line
do
	echo $line
done < "${1:-/dev/stdin}"

# Script Output (stdout & stderror)
ll 1>stdout.txt 2>stderr.txt
# Basically the output of the command will go to stdout but if any error happens it will go towards stderr.txt
ll >std.txt 2>&1	# also ll >& std.txt
# in above example stdout and stderr will both go into same file
