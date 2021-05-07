make
docker build . -t task4
docker run -d --name task4 --network nitkc -p 9001:9001 task4

