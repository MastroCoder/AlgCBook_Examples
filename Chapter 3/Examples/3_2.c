#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 *  PROGRAMA 3.2 PÁG. 75 - CÁLCULO DE MÉDIA E DESVIO PADRÃO
 * 
 *  Este programa tem o objetvo de calcular uma média aritmética e o desvio padrão
 *  de um conjunto qualquer de N números gerados pela função rand(). A única diferença é
 *  a utilização de typedef para definir um tipo Number que é um inteiro, bem como os 
 *  argumentos da main: int argc e char **argv
 */

typedef int Number;

Number randnum(){
    return rand();
}

int main(int argc, char *argv[]){
    int N = atoi(argv[1]); // Primeiro argumento durante execução é N ($ ./program <N>)
    float m1 = 0.0, m2 = 0.0;
    Number x;

    for(int i = 0; i < N; i++){
        x = randnum();
        m1 += ((float) x) / N;
        m2 += ((float) x*x) / N;
    }
    printf("       Average: %f\n", m1);
    printf("Std. Deviation: %f\n", sqrt(m2-m1*m1));
    return 0;
}