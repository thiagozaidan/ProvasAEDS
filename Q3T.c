Lista* concatena(Lista *l1, Lista *l2){

    Lista *a = l1; // colocação das listas já existentes em variaveis para a realização da concatenação
    Lista *a2 = l2;
    Lista *l3 = NULL; // criação de uma 3a lista, ainda nula, que receberá como parâmetro a concatenação de ambas as listas ja existentes

    while (a != NULL || a2 != NULL) {
        a = a->prox;
        a2 = a2->prox;
        if (a != NULL && a2 != NULL) {
            for (a = l1, a2 = l2; a != NULL && a2 != NULL; a=a->prox, a2 = a2->prox){
                insere(&l3, p->info); // um procedimento de inserção para a colocação dos dados existentes nas listas l1 e l2 em uma terceira lista l3
                insere(&l3, p2->info);
            }
        }
        else{
           return l3; // retorno da terceira lista l3
        }
    }
    while (l3 != NULL) {
        printf ("Dado: %d\n", l3->info); // impressão dos dados presentes na lista l3
        l3 = l3->prox;
    }

    return l3;
}

/* Corpo do procedimento de inserção:
void insere(Lista** li,int info){
	Lista *novo =(Lista *) malloc(sizeof(Lista));

	novo -> info = info;
	novo -> prox = *li;
	*li = novo;

} */

