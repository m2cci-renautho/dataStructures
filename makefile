main : main.o linkedList.o
	gcc -o main main.o linkedList.o

main.o : main.c linkedList_type.h linkedList.h
	gcc -Wall -c main.c

linkedList.o : linkedList.c linkedList.h linkedList_type.h
	gcc -Wall -c linkedList.c

clean :
	rm -rf *.o main