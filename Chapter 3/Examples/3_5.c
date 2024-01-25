#include <stdio.h>

/*
 *  PPROGRAMA 3.5 PÁG. 84 - CRIVO DE ERATÓSTENES
 * 
 *  Este programa define uma implementação do crivo de Eratóstenes, algoritmo para a 
 *  determinação de números primos dentro ed uma faixa N de números. O algoritmo define
 *  um array composto por uns (i. e. a[2-N] == 1) e depois, dentro de um loop, ele perpassa 
 *  pelos números de i a N a partir de j, incrementando esse j de um e definindo os múltiplos
 *  de i como 0.
 *  Após todas as operações, o que sobrar como 1 no vetor é primo.
 */


#define N 10000

int main(){
    int a[N];
    for(int i = 2; i < N; i++){
        a[i] = 1;
    }
    for(int i = 2; i < N; i++){
        if(a[i]){
            for(int j = i; j * i < N; j++){
                a[i*j] = 0;
            }
        }
    }
    for(int i = 2; i < N; i++){
        if(a[i]) printf("%4d\n", i);
    }
    return 0;
}