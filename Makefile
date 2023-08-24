INSTALL_DIR = /usr/bin/
INNAME = mincfetch.c
OUTNAME = zxfetch

help:
  @echo "make install    Install zxfetch"
  @echo "make uninstall  Uninstall zxfetch"

install:
  cp ${INNAME} ${INSTALL_DIR} ${OUTNAME}
  cc mincfetch.c -o zxfetch

uninstall:
  rm ${INSTALL_DIR} ${INNAME} ${OUTNAME}
