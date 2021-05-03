make
docker build . -t task4
docker run -d -p 9001:9001 task4 --name task4

