all: work15.o
	gcc -o output work15.o

work13.o: work15.c
	gcc -c work15.c

run:
	./output

clean:
	rm *.o
	rm output
	


