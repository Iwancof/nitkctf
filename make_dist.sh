mkdir dist

for ((i=1 ; i<11 ; i++))
do
  mkdir dist/task$i
  cd task$i
  make
  cd ../
  cp task$i/task$i.c dist/task$i/
  cp task$i/task$i dist/task$i/original_task$i
  cp task$i/Makefile dist/task$i/
done
