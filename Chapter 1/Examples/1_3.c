#include <stdio.h>
#define N 10000 // limite arbitrário

/*
 *  PROGRAMA 1.3 PÁG. 17 - SOLUÇÃO SIMPLES P/ PROBLEMA DE CONECTIVIDADE DE GRAFOS
 *  WEIGHTED QUICK UNION 
 *
 *  A lógica é similar ao programa 1.2, mas utiliza-se de um outro artifício:
 *  Havendo a necessidade de unir árvores, a menor se junta à maior, sem criar,
 *  portanto, estruturas de árvore desencessariamente longas.
 * 
 *  Assim, torna-se necessária a adição de um vetor sz[N] tal que guarde, para cada 
 *  id[i] == i (raiz), o número de nodos.
 */

int main(){
    int i, j, t, p, q;
    int id[N], sz[N];
    // preenchimento dos vetores (id[1] = 1; id[2] = 2; id[3]...; sz[1 até n] = 1) 
    for(i = 0; i < N; i++){
        id[i] = i;
        sz[i] = 1;
    }
    
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

        // Se a árvore com raiz em i é menor que com a raiz em j, liga-a na com raiz em j;
        // Senão, liga j em i;
        if(sz[i] < sz[j]){
            id[i] = j;
            sz[j] += sz[i];
        }
        else{
            id[j] = i;
            sz[i] += sz[j];
        }
        
        // Imprime se não conectados antes das operações do algoritmo
        printf(" %d %d\n", p, q);
    }
    return 0;
}