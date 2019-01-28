#!/bin/sh

a=-100000000
b=-10000000
echo "Enter size"
read num
while [ $num -gt "0" ]
do
    read x
    if [ "$x" -gt "$a" ] && [ "$x" -gt "$b" ]
    then
        b=$a
        a=$x
    elif [ "$x" -lt "$a" ] && [ "$x" -gt "$b" ]
    then
        b=$x
    fi
    num=`expr $num - 1`
done
echo $b