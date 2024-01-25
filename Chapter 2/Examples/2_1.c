#include <stdio.h>

/*
 *  PROGRAMA 2.1 PÁG. 55 - BUSCA SEQUENCIAL SIMPLES
 * 
 *  Este programa apresenta um algoritmo de busca sequencial simples implementado
 *  como uma função em C. O custo médio de uma busca dessa natureza é (N + 1)/2, e 
 *  o custo real depende da localização do número no array.
 */

// Procura a partir de l parando em r. Retorna a posição ou -1.
int search(int a[], int v, int l, int r){
    for(int i = l; i <= r; i++)
        if(a[i] == v) return i;
    return -1;
}
