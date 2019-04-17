#include <stdio.h>
#include <stdlib.h>
#include "Q2T.h"
#define MAX_NUM 20

pilha* Inicia (){
   pilha* p =(pilha*) malloc(sizeof(pilha));
}


int Empilhar(pilha *p, int tam){
    int i;
    int posi = 0;
    int sumPI = 0;
    int sumPP = 0;
    int sumVI = 0;
    int sumVP = 0;
    p -> top = tam;

    for(i = 0; i < tam; i++){
        p -> num[i] = posi++;
        if(posi %2 =! 0){
            sumPI = sumPI + num[i];
            printf("O somatorio dos valores nas posiçoes impares da pilha eh %d\n", sumPI);
        } else if(posi %2 == 0) {
            sumPP = sumPP + num[i];
            printf("O somatorio dos valores nas posiçoes pares da pilha eh %d\n", sumPP);
        } if(num[i] %2 =! 0){
            sumVI = sumVI + num[i];
            printf("O somatorio dos valores impares da pilha eh %d\n", sumVI);
        } else if(num[i] %2 == 0){
            sumVP = sumVO + num[i];
        }
    }

}

int Desempilhar(pilha *p, int tam){
    int u;

    for(u = tam, u > 0; u--);
        p -> num[u] = p--;

}

void libera_pilha(pilha *p){

    free(p);

}
