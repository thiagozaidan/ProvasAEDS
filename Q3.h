#ifndef pilha2_H_INCLUDED
#define pilha2_H_INCLUDED
#define Max 100

typedef struct Pilha{
    char item[max];
    int Topo;
}pilha;


pilha* inicia ();
void insercao(pilha *p, char frase[],int tamanho);
int inversao(pilha *p,int tamanho);

#endif
