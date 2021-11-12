#include <stdio.h>
#include "sequence_type.h"

/* affichage d'une Sequence */
void printSequence (Sequence S) {

  unsigned int i ;

  printf("[") ;
  for (i=0; i<S.L ; i++) {
	printf(" %d ", S.T[i]) ;
  }
  printf("]\n") ;
}

/* Ajoute à la séquence S l'entier x à l'indice i si possible*/
void add(Sequence *S, int x, unsigned int i){
  unsigned int j;
  if(S->L+1 > N){
    printf("Impossible d'ajouter un élément, taillé dépassée!\n");
  }
  else{
    if(i>S->L) printf("Index out of range !\n");
    else{
      S->L++;
      j = S->L;
      while(j>i){
        S->T[j] = S->T[j-1];
        j--;
      }
      S->T[i] = x;
    }
  }
}
/*Ajoute l'élément x au début de la séquence*/
void ajoutTete(Sequence *S, int x){
    add(S,x,0);
}
/*Ajoute l'élément x à la finzip de la séquence*/
void ajoutQueue(Sequence *S, int x){
    add(S,x,S->L);
}
/* Supprime de la séquence S l'entier situé à l'indice i si possible*/
void supprimer(Sequence *S, unsigned int i){
  unsigned int j;
  if(S->L == 0) printf("Séquence vide, impossible de supprimer\n");
  else{
    if(i>=S->L) printf("index out of range!\n");
    else{
      j = i+1;
      while(j<S->L){
        S->T[j-1] = S->T[j];
        j++;
      }
      S->L--;
    }
  }
}
/* Supprime l'élément d'indice 0 de S*/
void supprimerTete(Sequence *S){
    supprimer(S,0);
}
/* Supprime le dernier élément de la séquence */
void supprimerQueue(Sequence *S){
    supprimer(S,S->L-1);
}
/* Renvoie l'indice d'un élément si trouvé, -1 sinon*/
int findElement(Sequence *S, int x){
  int i=0;
  while(i<S->L && S->T[i] != x)
    i++;
  return (i<S->L)?i:-1;
}
/*Renvoie vrai si la séqunce est vide, faux sinon*/
int estVide(Sequence *S){
  return !S->L;
}
/* Renvoie vrai si la séquence est triée, faux sinon*/
int estTriee(Sequence *S){
  int i = 0;
  int triee = 1;
  while (i < S->L-1 && triee){
    triee = triee && (S->T[i] <= S->T[i+1]);
    i++;
  }
  return triee;
}