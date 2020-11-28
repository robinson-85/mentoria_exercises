/* 2. Escreva um programa que exiba na tela a quantidade de números ímpares
existentes entre dois números que o usuário digitar (testar inclusive os números
digitados). */

#include <stdio.h>

int main(){
    int n1, n2, impar = 0;
    printf("Digite dois números: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    for(int i=0; i<= 1; i++){
        printf("Exiba o número ímpar: %d\n", impar);

    }
    

    getchar();
    return 0;
}
