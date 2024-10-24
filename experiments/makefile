all: final

final: main_test.o print_test.o
	gcc main_test.o print_test.o

main_test.o: main_test.c 
	gcc main_test.c -c

print_test.o: print_test.c 
	gcc print_test.c -c print_test.o

clean:
	rm *.o

