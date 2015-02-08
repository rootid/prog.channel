#!/bin/sh

sum_=0

read n
t_n=$n

while [ $n -ne 0 ]
do
    n=`expr $n - 1`
    read a
    sum_=`echo "$sum_ + $a" | bc`
done


printf "%.3f\n" $(echo "scale=4; $sum_ / $t_n " | bc)

#printf "%.3f\n" $(avg_)

