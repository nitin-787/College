echo "Enter the number"
read N
rev=0
while [ $N -gt 0 ]
do
rem=`expr $N % 10`
rev=`expr $rev \* 10 + $rem`
N=`expr $N / 10`
done
echo "Reverse of the entered number is: $rev"
