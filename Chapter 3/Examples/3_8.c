#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "3_3.h"

/*
 *  PPROGRAMA 3.8 PÁG. 88 - CÁLCULO DE PONTOS
 * 
 *  Este programa tem o intuito de calcular quantos pontos N gerados aleatoriamente dentro
 *  de um quadrado unitário podem ser unidos a partir de um segmento de reta menor que uma
 *  distância d.
 */

float randFloat(){
    return 1.0*rand()/RAND_MAX;
}

/*float distance(point a, point b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}*/

int main(int argc, char **argv){
    int N = atoi(argv[1]);
    float d = atof(argv[2]);
    point *a = malloc(N*sizeof(*a));
    int i, j, cnt = 0;

    // preenchimento do vetor de pontos
    for(i = 0; i < N; i++){
        a[i].x = randFloat();
        a[i].y = randFloat();
    }

    // cálculo da distância
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if(distance(a[i], a[j]) < d) cnt++;
        }
    }

    printf("%d edges shorter than %.2f\n", cnt, d);
    return 0;
}