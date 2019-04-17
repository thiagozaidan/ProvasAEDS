#ifndef Q1T_H_INCLUDED
#define Q1T_H_INCLUDED

#define MAX_NUM 30

struct num {
    	int number;
};

typedef struct num Num;

struct filaPar{
	Num n[MAX_NUM];
	int inicio;
	int fim;
	int qtd;
};
typedef struct fila FilaP;

struct filaImpar{
    Num n[MAX_NUM];
    int inicio;
    int fim;
    int qtd;
};
typedef struct fila FilaI;

struct Pilha {
    int tam;
    int elemento;
};
typedef struct Pilha pilha;

void inserePar(FilaP** f2, Num n);
void insereImpar(FilaI** f1, Num n);
Num retira(FilaI** f1, FilaP** f2);
void imprime(pilha* p);
void liberaP(FilaP* f2);
void liberaI(FilaI* f1);
pilha* cria_pilha(void);
void insere_pilha(pilha *p, int num);
void retira_pilha(pilha *p);
int filatamP(FilaP* f2);
int filatamI(FilaI* f1);
FilaP* cria();
FilaI* cria();

#endif // Q1T_H_INCLUDED
