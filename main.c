#include <stdio.h>

#include "linkedList_type.h"
#include "sequence_type.h"
#include "linkedList.h"
#include "sequence.h"

int main(){

    Cel *T = NULL;

    addToHead(8, &T);
    addToHead(9, &T);
    addToHead(10, &T);
    addToQueue(5, T);

    printLinkedList(T);

    return 0;
}