
autoreconf
./configure --enable-nls --prefix=/tmp/hello
make
make install
LANGUAGE=fi_FI.UTF-8 /tmp/hello/bin/hello
