/* 5. Escreva um programa que calcule o fatorial de um número informado pelo usuário.
Dica: O fatorial de um número N é dado pela fórmula:
N! = 1 * 2 * 3 * 4 * 5 * ... * N.       */

#include <stdio.h>

int main(){
    int fatorial, numero;
    printf("Insira um valor pelo qual deseja calcular o seu fatorial: \n");
    scanf("%d", &numero);

    for(int fatorial = 0; fatorial > 1; numero = numero - 1){
        fatorial = fatorial * numero;
        printf("O numero fatorial é: %d\n", fatorial);
    }
    
    getchar();
    return 0;
}