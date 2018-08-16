#1/bin/sh
# Question
# Asks user for its name
echo "What's your name"
read ROMAN
# Creates a folder of its name
mkdir $ROMAN
# Creates a file inside the folder with his name.cpp
touch $ROMAN/$ROMAN
