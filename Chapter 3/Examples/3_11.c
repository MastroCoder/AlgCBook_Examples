#include <stdio.h>
#include <stdlib.h>

/**
 *  PROGRAMA 3.11 PÁG. 99 - INSERTION SORT EM LISTA ENCADEADA
 * 
 *  Este programa mostra o funcionamento de um algoritmo de ordenação sobre uma lista
 *  ligada. Este programa utiliza-se da estratégia de criar um nó vazio em que a lista vai 
 *  se conectar (um nó 'cabeça').
*/

typedef struct no *link;
struct no { int item; link prox; };

int main(int argc, char **argv){
    int i, N = atoi(argv[1]);
    struct no heada, headb;
    link t, u, x;
    link a = &heada, b = &headb;
    b->prox = NULL;

    for (i = 0, t = a; i < N; i++){
        t->prox = malloc(sizeof *t);
        t = t->prox; 
        t->prox = NULL;
        t->item = rand() % 1000;
    }
    for(t = a->prox; t != NULL; t = u){
        u = t->prox;
        for(x = b; x->prox != NULL; x = x->prox){
            if(x->prox->item > t->item){
                break;
            }
        }
        t->prox = x->prox;
        x->prox = t;
    }
    return 0;
}