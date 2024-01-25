#include <stdio.h>
#include <stdlib.h>

/*
 *  PROGRAMA 3.10 PÁG. 98 - INVERSÃO DE LISTA
 *  
 *  O programa a seguir somente inverte uma lista ligada a partir de seu primeiro nó 
 *  (representado aqui como link pois link é um ponteiro para um nó. Um sinônimo definido na
 *  linguagem).
 */

typedef struct no *link;
struct no { int item; link prox; };

// lembrando: é a mesma coisa de escrever no* reverse()
link reverse(link x){
    link t;
    link y = x;
    link r = NULL;
    while(y != NULL){
        t = y->prox;
        y->prox = r;
        r = y;
        y = t;
    }
    return r;
}