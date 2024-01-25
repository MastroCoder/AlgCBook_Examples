#include <stdio.h>
#define N 10000 // limite arbitrário

/*
 *  PROGRAMA 1.2 PÁG. 15 - SOLUÇÃO SIMPLES P/ PROBLEMA DE CONECTIVIDADE DE GRAFOS
 *  QUICK UNION (not too quick find)
 *
 *  O programa guarda nodos p e q em um array id, e a lógica faz com que criem-se 
 *  árvores como no anterior, mas que podem ser independentes e cuja raiz aponta para si
 *  (i. e. se houver uma árvore, id[i] = i na raiz da mesma)
 */
int main(){
    int i, j, t, p, q, id[N];
    // preenchimento do vetor (id[1] = 1; id[2] = 2; id[3]...)
    for(i = 0; i < N; i++)
        id[i] = i;
    
    // Havendo input
    while(scanf("%d %d", &p, &q) == 2){
        /*
         *  Ambos os comandos for percorrem as árvores de modo a chegar onde i == id[i]
         *  (ou uma raiz ou um valor disjunto da árvore em questão, podendo também ser 
         *  raiz.) 
         */
        for(i = p; i != id[i]; i = id[i]) ;
        for(j = q; j != id[j]; j = id[j]) ;

        // Se na mesma árvore (conectados), passa p/ o próximo laço
        if(i == j) continue;
        // Senão, transforma a raiz 
        id[i] = j;
        // Imprime se não conectados antes das operações do algoritmo
        printf(" %d %d\n", p, q);
    }
    return 0;
}