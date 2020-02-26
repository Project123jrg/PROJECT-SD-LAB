
#!/bin/sh
echo "Enter the word to search:"
read s
c=0
for i in `cat  /home/mca30/Desktop/s4/countpara.txt`;
do if [ $i == $s ];
then 
c=$((c + 1))
fi
done
echo "count is:"
echo $c
