#include <stdio.h>
#define N 10000 // limite arbitrário

/*
 *  PROGRAMA 1.1 PÁG. 12 - SOLUÇÃO SIMPLES P/ PROBLEMA DE CONECTIVIDADE DE GRAFOS
 *  QUICK FIND
 *
 *  O programa guarda nodos p e q em um array id, e id[p] == id[q] se conectados.
 */
int main(){
    int i, t, p, q, id[N];
    // preenchimento do vetor (id[1] = 1; id[2] = 2; id[3]...)
    for(i = 0; i < N; i++)
        id[i] = i;
    
    // Havendo input
    while(scanf("%d %d", &p, &q) == 2){
        if(id[p] == id[q]) continue; // se iguais, passa p/ próximo;
        // grava o id[p] (suscetível a mudança dentro do algoritmo) para comparação
        for(t = id[p], i = 0; i < N; i++){
            // se o número não foi gravado, pega o par e iguala
            if(id[i] == t) id[i] = id[q];
        }
        // imprime se não conectados
        printf(" %d %d\n", p, q);
    }
    return 0;
}