# docker run -it \
#	-v $PWD:/sharedFolder \
#	--name ubuntu-gpp-1 \
#	ubuntu-gpp /bin/bash

FROM ubuntu:18.04

RUN sed -i 's/archive.ubuntu.com/mirrors.ustc.edu.cn/g' /etc/apt/sources.list

RUN apt-get update && apt-get install -y \
vim \
zsh \ 
git \ 
g++ 
