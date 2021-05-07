for ((i=1 ; i<11 ; i++))
do
  cd task$i
  ./start.sh
  cd ..
done
