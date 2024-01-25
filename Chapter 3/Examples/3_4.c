#include "3_3.h"
#include <math.h>

/*
 *  PORGRAMA 3.4 PÁG. 80 - IMPLEMENTAÇÃO DE TIPO DE DADO
 * 
 *  Este programa define uma implementação a partir da interface definida no header file 
 *  3_3.h, definindo uma função responsável por calcular a distância entre dois pontos a 
 *  partir de dois pontos a e b.
 */


float distance(point a, point b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}