/**
 *  PROGRAMA 3.12 PÁG. 101 - INTERFACE PARA PROCESSAMENTO DE LISTA ENCADEADA
 *
 *  Este header file contém somente as declarações para operações interessantes de serem
 *  realizadas em uma lista encadeada. Seria interessante nomeá-lo apropriadamente, com um
 *  nome do tipo 'list.h'
 */

typedef struct no *link;
struct no
{
    Item item; // Considere que Item é outra struct qualquer.
    link prox;
}; 
typedef link Node;

void initNodes(int);
link newNode(int);
void freeNode(int);
void insertNext(link, link);
link deleteNext(link);
link Next(link);
int Item(link);
