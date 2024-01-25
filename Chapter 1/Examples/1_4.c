#include <stdio.h>
#define N 10000 // limite arbitrário

/*
 *  PROGRAMA 1.4 PÁG. 19 - SOLUÇÃO SIMPLES P/ PROBLEMA DE CONECTIVIDADE DE GRAFOS
 *  WEIGHTED QUICK UNION + PATH COMPRESSION BY HALVING
 *
 *  A diferença deste programa para o 1.3 está na compressão de caminho. Com esta adição,
 *  o programa passa de empiricamente linear para próximo da linearidade real.
 * 
 *  Nesta implementação, porém, é utilizada uma saída mais simples que a compressão 
 *  completa chamada "path compression by halving". Nela, cada ligação "pula" um nodo.
 *  Portanto, se houvesse uma árvore do tipo [0]-1-2 (o número entre colchetes é a raiz), 
 *  o 2 seria movido e a árvore se tornaria 1-[0]-2.
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
         *  Aqui é onde reside a única mudança em relação ao programa 1.3. A cada tentativa
         *  de percorrer as árvores, adiciona-se a compressão por halving "pulando" um nodo. 
         */
        for(i = p; i != id[i]; i = id[i]){
            id[i] = id[id[i]];
        } 
        for(j = q; j != id[j]; j = id[j]){
            id[j] = id[id[j]];
        }

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