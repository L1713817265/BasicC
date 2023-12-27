main:main.o add.o sub.o mul.o div.o
	gcc main.o add.o sub.o mul.o div.o -o main

add.0:add.c
	gcc -c add.c -o add.o

sub.0:sub.c
	gcc -c sub.c -o sub.o

mul.0:mul.c
	gcc -c mul.c -o mul.o

div.0:div.c
	gcc -c div.c -o div.o

main.0:main.c
	gcc -c main.c -o main.o

clean:
	@rm -rf *.o main