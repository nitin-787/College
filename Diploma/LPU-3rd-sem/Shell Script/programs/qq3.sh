echo "Enter Num1"
read n1
echo "Enter Num2"
read n2
echo "Enter Num3"
read n3
echo "Enter Num4"
read n4

if ((n1 > n2)); then
   if ((n1 > n3)); then
      if ((n1 > n4)); then
         echo "$n1 is a Greatest Number"
      else
         echo "$n4 is a Greatest Number"
      fi
   elif ((n3 > n4)); then
      echo "$n3 is a Greatest Number"
   else
      echo "$n4 is a Greatest Number"
   fi
elif ((n2 > n3)); then
   if ((n2 > n4)); then
      echo "$n2 is a Greatest Number"
   else
      echo "$n4 is a Greatest Number"
   fi
elif ((n3 > n4)); then
   echo "$n3 is a Greatest Number"
else
   echo "$n4 is a Greatest Number"
fi
