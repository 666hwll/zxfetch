INSTALL_DIR = /usr/bin/
INNAME = mincfetch.c
OUTNAME = zxfetch

help:
	@echo "make install      Install zxfetch."
	@echo "make uninstall    Remove zxfetch."

install:
	$(CC) $(INNAME) -o $(OUTNAME)
	sudo cp $(OUTNAME $(INSTALL_DIR)
 
   
uninstall:
	sudo rm $(INSTALL_DIR)/$(OUTNAME)
