#/bin/sh
#Asks user for its name
echo "What's your name"
read Roman
#creates a folder of its name
mkdir $Roman
#creates five files inside that folder with its name ending with numbers 1-5.cpp
for i in 1 2 3 4 5
do 
   echo "Looping ... number $i"
touch $Roman"$i.cpp"
done



