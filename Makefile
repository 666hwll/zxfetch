INSTALL_DIR = /usr/bin/
OUTNAME = zxfetch

help:
	@echo "make install      Install zxfetch."
	@echo "make uninstall    Remove zxfetch."

install:
	$(CC) mincfetch.c -o $(OUTNAME) -lselinux
	sudo cp $(OUTNAME) $(INSTALL_DIR)
 
   
uninstall:
	sudo rm $(INSTALL_DIR)/$(OUTNAME)

deb:
	dpkg-deb --build --root-owner-group zxfetch
