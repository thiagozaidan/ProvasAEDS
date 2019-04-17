#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Q3.h>

pilha* inicia (){
   pilha* p =(pilha*) malloc(sizeof(pilha));
}


void insercao(pilha *p, char X[],int tamanho){
	int i;
    p->top = tamanho;

    for(i = 0;i< tamanho;i++){
       	p->item[i] = X[i];
    }

}
int inversao(pilha *p,int tamanho){
	char novo[max];


	for (int i = 0; i < tamanho; i++){
		for (int u = tamanho; u > 0; u--){
			novo[i] = p->item[u];// realiza-se a comparação do inverso
		}
	}

	if (strcmp(novo,p->item) == 0){
		getchar();
		putchar();// impressão do inverso
	}

    return novo;
}
