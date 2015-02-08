#!/bin/sh

read z

#echo "scale = 3; $z"  | bc

printf "%.3f\n" $(echo "scale=4; $z" | bc)

