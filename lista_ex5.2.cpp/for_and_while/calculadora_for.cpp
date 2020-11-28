#include<stdio.h>
int main(){
    int n1, n2, resultado1;
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);

    resultado1 = n1 + n2;

    printf("A soma dos números serão: %d\n", resultado1);

    int n3, n4, resultado2;
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n3);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n4);

    resultado2 = n3 + n4;

    printf("A soma dos novos números: %d\n", resultado2);

    getchar();
    return 0;
}

