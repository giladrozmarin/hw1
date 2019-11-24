
all: mains maind	
mains: main.o mymaths
	gcc -Wall -g -fPIC -o mains main.o libmyMath.a
maind: main.o mymathd
	gcc -Wall -g -fPIC -o maind main.o ./libmyMath.so
mymathd: power.o basicMath.o
	gcc -shared -o libmyMath.so power.o basicMath.o
mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o	
main.o: main.c myMath.h  
	gcc -Wall -g -fPIC -c main.c 	
power.o: power.c myMath.h
	gcc -Wall -g -fPIC -c power.c
basicMath.o: basicMath.c myMath.h
	gcc -Wall -g -fPIC -c basicMath.c


.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind