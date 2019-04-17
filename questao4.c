#include <stdio.h>
#include <math.h>
  
typedef int (*operation)(int);
 
int raiz(int t){
   int result_raiz; 
   result_raiz = sqrt(t);

   return result_raiz;
}
  
int fat(int t){
    int i;
    int result_fat;
    for (int i = t; i != 1; i--){
        result_fat = result_fat * i;
    }
 
    return result_fat;
}

int pot(int t){
      
    return(t * t * t * t);
} 

int main(){
 
    int t;
    
    printf("Por favor, digite o número desejado:\n");
    scanf("%d", &t);

    operation vet[3] = {raiz, fat, pot};
   
    printf("A raiz quadrada do número é: %d\n", vet[0](t));
    printf("O fatorial do número é: %d\n", vet[1](t));
    printf("O número elevado à quarta potência é: %d\n", vet[2](t));
    return 0;
}
