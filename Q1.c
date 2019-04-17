#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Q1.h"

int menu(void){

	int choice;
	printf("Digite uma opção:\n");
    printf("0 - Sair!\n");
    printf("1 - Inserção de produto no carrinho de compras:\n");
    printf("2 - Exclusão de produto no carrinho de compras:\n");
    printf("3 - Cálculo de valor total do carrinho de compras:\n");
    printf("4 - Cálulo de valor total de produtos de limpeza no carrinho de compras:\n");
    printf("5 - Cálculo de valor total de alimentos no carrinho de compras:\n");
    printf("6 - Cálculo de valor total de produtos de uso pessoal no carrinho de compras:\n");
    printf("7 - Impressão do nome de todos os itens no carrinho de compras:\n")
    printf("Opção: ");
    scanf("%d",&choice);

    return choice;
}
void criar_Lista(lista** l){
    *l = NULL;
}

void imprimemome(lista* l) {

    while (l != NULL) {
        printf ("Produto: %s\n", l->prod.nome);
    	l = l->prox;
   }
}

void insercao(lista** l, itens item){
	lista *novo =(lista *) malloc(sizeof(lista));

	if(novo == NULL){
		printf("ERROR\n");
	}
	novo -> prod  = item;
	novo -> prox = *l;
	*l = novo;

}
void retirar(lista** l,char exclu[]){

	lista *ant = NULL;
	lista *t = *l;

	while(t != NULL && strcmp(t->prod.nome, exclu) != 0){
		ant = t;
		t = t -> prox;

	}
	if(t == NULL){
        printf("Não há esse produto no carrinho de compras!\n");
    }
    if(ant == NULL){
    	*l = t->prox;

    }
    else{
    	ant->prox = t->prox;
	}
}
float calctotal(lista* l,float valorTotal){
	float sum = 0, resultado;

	while(l != NULL){
		sum += l->prod.valor;
	 	l = l->prox;
	}

	resultado = sum++;

	return resultado;
}

float calclimp(lista* l, float valorTlimp){
    float sumL = 0, resultadoL;

    while(l != NULL){
        if(l->prod.tipoPRODUTO == '1'){
            sumL += l.prod.valor;
            l = l->prox;
        }
    }

    resultadoL = sumL++;

    return resultadoL;
}

float calcali(lista* l, float valorTali){
    float sumA = 0, resultadoA;

    while(l != NULL){
        if(l->prod.tipoPRODUTO == '2'){
            sumL += l.prod.valor;
            l = l->prox;
        }
    }

    resultadoA = sumA++;

    return resultadoA;
}

float calcuso(lista* l, float valorTuso){
    float sumU = 0, resultadoU;

    while(l != NULL){
        if(l->prod.tipoPRODUTO == '3'){
            sumL += l.prod.valor;
            l = l->prox;
        }
    }

    resultadoU = sumU++;

    return resultadoU;
}



