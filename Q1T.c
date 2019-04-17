#include <stdio.h>
#include <stdlib.h>
#include "Q1T.h"

FilaP* cria(){
	Fila *fi = (Fila*) malloc (sizeof(Fila));

	if(fi != NULL){
		fi -> fim = 0;
		fi -> inicio = 0;
		fi -> qtd = 0;
	}
	return fi;
}

FilaI* cria(){
    Fila *fi = (Fila*) malloc (sizeof(Fila));

	if(fi != NULL){
		fi -> fim = 0;
		fi -> inicio = 0;
		fi -> qtd = 0;
	}
	return fi;

}

void inserePar(FilaP** fi, Num n){
	if((**fi).qtd != MAX_AL){
        if(n.numero != 0){
            if(n.numero % 2 == 0) {
                (**fi).n[(**fi).fim] = n;
                (**fi).fim = ((**fi).fim +1)% MAX_AL;
                (**fi).qtd++;
                printf("Numero %d inserido na Fila Par\n", n.numero);
            }else{
		printf("Fila cheia\n");
	}
   }
  }
}

void insereImpar(FilaI** fi, Num n){
    if((**fi).qtd != MAX_AL){
        if(n.numero != 0){
          if(n.numero % 2 != 0){
            (**fi).n[(**fi).fim] = n;
            (**fi).fim = ((**fi).fim +1)% MAX_AL;
            (**fi).qtd++;
            printf("Número %d inserido na Fila Ímpar\n", n.numero);
            }
	}else{
		printf("Fila cheia\n");
	}
   }
}

Num retira(FilaI** fi, FilaP** fi){

	Num num;
	pilha* = p;

	if((**fi).qtd != 0){
		n_r = (**fi).n[(**fi).inicio];
		(**fi).inicio =((**fi).inicio + 1)% MAX_AL;
		(**fi).qtd--;
		if(num.FilaI > 0 && num.FilaP > 0){
		p = insere_pilha(pilha* p, int num);
		} else {
		p = retira_pilha(pilha* p);
		}
	}
	return n_retirado;
}

pilha* cria(void){
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p -> tam = 0;
    return p;
}



void insere_pilha(pilha* p, int num){
    if(pi -> tam == MAX_NUM) {
        printf("Capacidade estourada!\n");
        exit(1);
    }

    p -> elemento[pi -> tam] = num;
    p -> tam++;

}

void retira_pilha(pilha* p){

    if(pi -> tam == 0){
        printf("Pilha vazia!\n");
        exit(1);
    }

    p -> tam--;

}

void imprime(pilha* p){
	int i;

	for(i = 0; i < p-> tam; i++) {
        printf("Número %d", p->elemento[i];
	}
}

void liberaP (FilaP* fi){
	if(fi != NULL){
		free(fi);
	}
}

void liberaI (FilaI* fi){
    if(fi != NULL){
        free(f1);
    }
}

int filatamP(FilaP* fi){

	return fi -> qtd;

}

int filatamI(FilaI* fi){

    return fi -> qtd;
}

