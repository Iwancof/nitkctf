FROM ubuntu:20.04

ARG BINARY="task9"
ARG PORT=9003

ENV DEBIAN_FRONTEND noninteractive

# socatのインストール
RUN apt-get -y update --fix-missing && apt-get -y upgrade
RUN apt-get -y install socat

# ユーザーの追加
RUN groupadd -r pwn && useradd -r -g pwn pwn

# ファイルの追加
COPY ./kimitu.txt /home/pwn/kimitu.txt
COPY ./${BINARY} /home/pwn/${BINARY}

# socatスクリプトの追加
RUN echo socat TCP-L:${PORT},reuseaddr,fork EXEC:./${BINARY},stderr > /home/pwn/entry.sh

# 権限設定
RUN chmod 440 /home/pwn/kimitu.txt
RUN chmod 550 /home/pwn/${BINARY}
RUN chmod 550 /home/pwn/entry.sh

RUN chown -R root:pwn /home/pwn

# 確認
RUN ls /home/pwn -lh

WORKDIR /home/pwn
USER pwn
ENTRYPOINT /bin/sh /home/pwn/entry.sh
