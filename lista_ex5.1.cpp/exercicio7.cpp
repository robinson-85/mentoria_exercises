/* 7. Faça um programa que monte os oito primeiros termos da sequência de Fibonacci. 
        0-1-1-2-3-5-8-13-21-34-55... */

#include <stdio.h>
int main(){
    int valor = 0, valor_anterior = 1, soma;
    
    for(int i = 0; i < 8; i++){
        printf("Soma: \n");
        soma = valor_anterior + valor;
        valor_anterior = valor;
        soma = valor_anterior;
        printf("%d", soma);
    }
    
    getchar();
    return 0;
}
