#ifndef Q2T_H_INCLUDED
#define Q2T_H_INCLUDED
#define MAX_NUM 20

typedef struct Pilhas{
	int num[MAX_NUM];
    int top;
}pilha;

pilha* Inicia ();
int Empilhar(pilha *p, int tam);
int Desempilhar(pilha *p, int tam);
void libera_pilha(pilha *p);


#endif // Q2T_H_INCLUDED
