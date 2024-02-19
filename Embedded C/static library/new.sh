#!/bin/bash
start=`date +%s`
echo -n "Enter the first number"
#read num1
num1=2
echo -n "Enter the second number"
#read num2
num2=3

sum=`expr $num1 + $num2`
echo "sum of two value is $sum"
end=`date +%s`
echo Excution time was `expr $end - $start` seconds.