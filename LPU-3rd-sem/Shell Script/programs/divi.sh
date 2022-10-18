echo "Divisible by 5 and 10  Numbers are"
for ((x=1;x<=100;x++))
do
r1=`expr $x % 5`
r2=`expr $x % 10`
if [ $r1 -eq 0 -o $r2 -eq 0 ]
then
echo $x
fi
done 
