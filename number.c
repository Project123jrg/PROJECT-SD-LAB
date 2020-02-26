#!/bin/bash
echo "Enter Size(N)"
read N

sum=0

echo "Enter Numbers"
for((i=1;i<=N;i++))
do
  read num          
  sum=`expr $sum + $num` 
done

echo "Sum of given elements are:" $sum
