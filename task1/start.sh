make
docker build . -t task1
docker run -d -p 9000:9000 task1 --name task1

