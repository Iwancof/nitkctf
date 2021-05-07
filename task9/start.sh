make
docker build . -t task9
docker run -d --name task9 --network nitkc -p 9003:9003 task9

