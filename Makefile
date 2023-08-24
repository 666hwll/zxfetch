INSTALL_DIR = /usr/bin/
user := $(whoami)
INNAME = /home/{user}/zxfetch/zxfetch

help:
    @echo "make install      Install zxfetch."
    @echo "make uninstall    Remove zxfetch."

install:
    cc mincfetch.c -o zxfetch
    cp ${INNAME} ${INSTALL_DIR}
 
   
uninstall:
    rm ${INSTALL_DIR}${INNAME}
