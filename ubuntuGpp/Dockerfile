# docker run -it --rm \
#	-v $PWD:/sharedFolder \
#	--name ubuntu-gpp-1 \
#	ubuntu-gpp /bin/zsh

# docker build -t ubuntu-gpp .

FROM ubuntu:18.04

RUN sed -i 's/archive.ubuntu.com/mirrors.ustc.edu.cn/g' /etc/apt/sources.list

RUN apt-get update && apt-get install -y \
vim \
zsh \ 
git \ 
g++ \ 
python3 \ 
python3-pip \ 
wget \
make

RUN wget https://github.com/robbyrussell/oh-my-zsh/raw/master/tools/install.sh -O - | zsh || true

