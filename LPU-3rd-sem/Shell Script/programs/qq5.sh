i=1
while [ $i -le 100 ];
do
sum=$((sum+i))
i=$((i+2))
done
echo "sum:"$sum
