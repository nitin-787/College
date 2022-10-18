echo "Enter Numbers"
N=6
i=1
sum=0
while [ $i -le $N ]
do
  read num
  sum=$((sum + num))
  i=$((i + 1))
done

echo $sum
