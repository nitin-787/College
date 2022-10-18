echo "Nitin Sharma" 
echo "Reg no. 12006550"



read -p "Enter a number: " number
if [ $((number%2)) -eq 0 ]
then
  echo `expr $number \* $number`
else
  echo "Number is odd."
fi
