

all:
	cp nvramrc.h src/linux
	cp nvramrc.h src/smallLinux
	make -C src/linux
	make -C src/smallLinux

clean:
	make -C src/linux clean
	make -C src/smallLinux clean
	make -C src/atmega8 clean
