# docker run -it --rm \
#	-v $PWD:/sharedFolder \
#	--name arch-gpp-1 \
#	arch-gpp /bin/zsh

# docker build -t arch-gpp .

FROM base/archlinux

RUN sed -i 's/archive.ubuntu.com/mirrors.ustc.edu.cn/g' /etc/apt/sources.list

RUN apt-get update && apt-get install -y \
vim \
zsh \ 
git \ 
g++ \ 
gdb \ 
python3 \ 
python3-pip \ 
wget \
make

RUN pip3 install -i https://pypi.tuna.tsinghua.edu.cn/simple  gdbgui

RUN wget https://github.com/robbyrussell/oh-my-zsh/raw/master/tools/install.sh -O - | zsh || true

