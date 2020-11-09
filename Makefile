CC=gcc
LIBMYMATHOBJECTS= power.o basicMath.o
FLAGS= -Wall -g
AR=ar
.PHONY: mymath clean all

mymaths: 
	$(AR) -rcs libmyMath.a $(LIBMYMATHOBJECTS)
mymathd:
	$(CC) -shared -o libmyMath.so $(LIBMYMATHOBJECTS)
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o
libmyMath.so: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o
all: mains maind
main.o: main.c myMath.h 
	$(CC) $(FLAGS) -c main.c 
power.o: power.c
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c 
	$(CC) $(FLAGS) -c basicMath.c
clean:
	rm -f maind mains *.so *.a *.o

