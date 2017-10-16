all: main.o linked_list.o
	gcc -o LLTest main.o linked_list.o

main.o: main.c linked_list.h
	gcc -c main.c linked_list.h

linked_list.o:
	gcc -c linked_list.c linked_list.h

clean: all
	rm *.o	
	rm *.gch

run: all
	./LLTest
