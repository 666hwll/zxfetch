INSTALL_DIR = /usr/bin/
INNAME = mincfetch.c
OUTNAME = zxfetch

help:
	@echo "make install      Install zxfetch."
	@echo "make uninstall    Remove zxfetch."

install:
	cc ${INNAME} -o ${OUTNAME}
	cp ${OUTNAME} ${INSTALL_DIR}
 
   
uninstall:
	rm ${INSTALL_DIR}${OUTNAME}
