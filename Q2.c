#include <stdio.h>
#include <stdlib.h>
#include "Q2.h"
#define max 15

void inicia(pilha *p){
	p->top = NULL;
}
void qntd(pilha *p){
	int tam;
	pilha1 *aux = p->top;

	while(aux != NULL){
		tam++;
		aux =aux->prox;
	}
}
void imprime(pilha *p){

pilha1 *aux = p->top;

	printf("Pilha:\"");

	while(aux != NULL){
		printf("%d ",aux->item );
		aux =aux->prox;
	}
	printf("\"\n");
}
int vazia(pilha *p){
	if (p->top == NULL){
		return 1;
	}
	else {
		return 2;
	}
}
void push(pilha *p,int valor){
	pilha1 *node =(Tpilha*)malloc(sizeof(Tpilha));

	node->item = valor;
	node->prox = p->top;

	p->top = node;
}
void pop(pilha *p,int *v){
	pilha1 *a;

	if (p->Topo != NULL){
		*v =p->top->item;
		p->top = p->top->prox;
		free(a);
	}
}

int TPilha(pilha *p, int valor){
    int i;
    pilha1 *a;

    for(i = 0; i < 14; i++){
        rand() %100 = valor[i];
        if(valor%2 == 0){
            node->item = valor;
            node->prox = p->top;
        } else if(valor%2 != 0){
            *v =p->top->item;
            p->top = p->top->prox;
            free(a);
        }

    }
}
