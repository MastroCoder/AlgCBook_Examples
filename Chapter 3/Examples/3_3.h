/*
 *  HEADER FILE 3.3 PÁG. 79 - INTERFACE DE STRUCTS
 * 
 *  Este programa define uma possível interface a ser usada na estrutura conjecturada nas 
 *  páginas 76-78 (interface-implementação-cliente) para um programa que precisaria definir
 *  um ponto em um plano cartesiano com números de ponto flutuante e uma operação de cálculo
 *  de distância é prototipada.
 */

typedef struct {
    float x;
    float y;
} point ;

float distance(point, point);

