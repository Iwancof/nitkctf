make
docker build . -t task10
docker run -d --name task10 --network nitkc -p 9004:9004 task10

