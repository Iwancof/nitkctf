
echo "docker run -d --network nitkc --name port_$1 -p " "$1:22 ssh_server_v3 "  | sh

