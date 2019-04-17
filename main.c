#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Q2T.h"
#define MAX_NUM 20

int main(void){
    pilha *p;
    int num, tam;

    for(tam = 1; tam < 20; tam++) {
    printf("Digite um número:\n");
    scanf("%d", &num);

    p = Inicia();
    Empilhar(p,tam);
   	Desempilhar(p,tam);
    }

    return 0;
}
