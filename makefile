main : main.o linkedList.o sequence.o
	gcc -o main main.o linkedList.o

main.o : main.c linkedList_type.h linkedList.h sequence.h sequence_type.h
	gcc -Wall -c main.c

linkedList.o : linkedList.c linkedList.h linkedList_type.h
	gcc -Wall -c linkedList.c

sequence.o : sequence.c sequence.h sequence_type.h
	gcc -Wall -c sequence.c
clean :
	rm -rf *.o main