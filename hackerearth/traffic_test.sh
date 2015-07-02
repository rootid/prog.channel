#!/bin/sh

readonly INPUT_=traffic_input.txt

echo "  "
echo "User input"
while read line
do
   echo ${line}
done < ${INPUT_}

echo "  "
echo "Output"

./a.out < ${INPUT_}
