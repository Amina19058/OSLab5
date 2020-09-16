#Differently. When  running one instance of the script in the background and one in the foreground yelds
#0 or 1 duplicate numbers
#!/bin/bash

for i in {1..100}
do
if [ -e newfile.txt ]
then
touch newfile.txt
fi
#critical region
number=$(tail -n 1 newfile.txt)
echo $((number+1)) >>newfile.txt
done
