CC=tcc

SRC=src/AutoDriveSystem.c
T_SRC=				\
	test/test.c		\
	test/Audi.c		\
	test/Benz.c		\
	test/Toyota.c	\
	test/Tesla.c	\

INCLUDE=include/
T_INCLUDE=test/include/

ADS=auto_drive_system.o

$(ADS):
	$(CC) -c -o auto_drive_system.o src/AutoDriveSystem.c -I$(INCLUDE)

.PHONY: clean
clean:
	rm -rf *.o *.exe

test : $(ADS)
	$(CC) -o test.exe $(ADS) $(T_SRC) -I$(T_INCLUDE) -I$(INCLUDE) && ./test.exe