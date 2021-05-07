make
docker build . -t task8
docker run -d --name task8 --network nitkc -p 9002:9002 task8 

