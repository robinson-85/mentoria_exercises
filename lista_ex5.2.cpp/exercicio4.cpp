/* 4. Escreva um programa que exiba todos os números de 1 a 100 e a cada número que
for múltiplo de 10, exiba a mensagem “MÚLTIPLO DE 10”. */

#include <stdio.h>
int main(){
    int i;
    for(i = 0; i<=100; i++){
        if(i%10 == 0){
            printf("Multiplo de 10: %d\n", i);
        }
    }
   
    getchar();
    return 0;
}