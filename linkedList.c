#include <stdio.h>
#include <stdlib.h>

#include "linkedList_type.h"


void printLinkedList(Cel *T){
    Cel *AC = T;
    while(AC != NULL){
        printf("%d ", AC->val);
        AC = AC->next;
    }
    printf("\n");
}

Cel * getQueue(Cel *T){
    Cel *AC = T;
    while(AC->next != NULL){
        AC = AC->next;
    } 
    return AC;
}

void addToQueue(int x, Cel *T){

    Cel *AC = getQueue(T);
    Cel * newC = (Cel *) malloc(sizeof(Cel));
    newC->val = x;
    newC->next = NULL;
    AC->next = newC;
}

void addToHead(int x, Cel **T){
    Cel * AC = (Cel *) malloc(sizeof(Cel));

    AC->val = x;
    AC->next = *T;
    *T = AC;

}
unsigned int length(Cel *T){
    unsigned int L = 0;
    Cel *AC = T;
    while(AC != NULL){
        L++;
        AC = AC->next;
    }
    return L;
}

int getIndex(int x, Cel * T){
    unsigned int index = 0;
    Cel *AC = T;
    while(AC != NULL && AC->val != x){
        index++;
        AC = AC->next;
    }
    return (AC == NULL)?-1:index;
}

