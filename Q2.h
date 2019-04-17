#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define max 15

typedef struct Pilhas{
	int Item;
	int num[max];
    struct Pilhas* prox;
}pilha1;

typedef struct Pont{
	Tpilha* top;
}pilha;

void inicia (pilha* p);
void qntd(pilha *p);
void imprime(pilha *p);
int vazia(pilha *p);
void push(pilha *p,int valor);
void pop(pilha *p,int *v);
int TPilha(pilha *p, int valor);

#endif // PILHA_H_INCLUDED
