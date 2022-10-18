echo "Enter seven digit number"
read N
esum=0
osum=0
while [ $N -gt 0 ]; do
    r=$(expr $N % 10)
    rem=$(expr $r % 2)
    if [ $rem -eq 0 ]; then
        esum=$(expr $esum + $r)
    else
        osum=$(expr $osum + $r)
    fi
    N=$(expr $N / 10)
done
echo "sum of even digits = $esum"
echo "sum of odd digits = $osum"
