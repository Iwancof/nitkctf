make
docker build . -t task1
docker run -d --name task1 -p 9000:9000 --network nitkc task1

