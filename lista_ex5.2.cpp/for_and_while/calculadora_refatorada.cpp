#include<stdio.h>
int main(){
    int n1, n2, numero_executors;

    printf("Digite quantas vezes você quer executar: \n");
    scanf("%d", &numero_executors);

    int resultado[numero_executors] = {};

    for(int i=0; i<numero_executors; i++) {    
        printf("Digite o primeiro numero inteiro: \n");
        scanf("%d", &n1);
        printf("Digite o segundo numero inteiro: \n");
        scanf("%d", &n2);

        resultado[i] = n1 + n2;
    }

    printf("Esses são os resultados: \n");
    
    for(int i=0; i<numero_executors; i++){
        printf("%d\n", resultado[i]);
    }
    
    getchar();
    return 0;
}

