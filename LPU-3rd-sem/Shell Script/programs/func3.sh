sumN() {

n=`expr $1`
total=0
for ((i=1; i<=$n; i++))
do
total=`expr $total + $i`
done 
echo "Sum of 1 to $n is = $total"
}
sumN 100

