#ifndef biblioteca_H
#define biblioteca_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct itemDaCompra{
	char nome[50];
	float  valor;
	int tipoProduto;
	//'1' - Limpeza
	//'2' - Alimentos
	//'3' - Uso pessoal
}itens;

typedef struct Listas{
	item prod;
	struct Listas *next;
}lista;

float valorTotal; //valor total da compra
float valorTlimp; //valor total dos produtos de limpeza
float valorTali; //valor total dos produtos de alimentos
float valorTuso; //valor total dos produtos de uso pessoal


int  menu(void);
void cria(lista** l);
void insercao(lista** l, itens item);
void retirar(lista** l,char exclu[]);
float calctotal(lista* l, float valorTotal);
float calclimp(lista* l, float valorTlimp);
float calcali(lista* l, float valorTali);
float calcuso(lista* l, float valorTuso);
void imprimenome(lista* l);

#endif
