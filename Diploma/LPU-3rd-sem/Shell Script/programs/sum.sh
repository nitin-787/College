echo "Enter five digit input"
read N
sum=0
while [ $N -gt 0 ]
do
rem=`expr $N % 10`
sum=`expr $sum + $rem`
N=`expr $N / 10`
done
echo "Sum of of five digit input is = $sum"
