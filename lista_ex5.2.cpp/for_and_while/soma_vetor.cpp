#include <stdio.h>
int main(){
    int vetor_result;
    int vetor1[5];
    int vetor2[5];

    for(int i=0; i<5; i++){
        printf("Preencha o primeiro vetor: \n");
        scanf("%d", &vetor1[i]);
    }

    for(int i=0; i<5; i++){
        printf("Preencha o segundo vetor: \n");
        scanf("%d", &vetor2[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d\n\n", vetor1[i] + vetor2[i]);
    }

    getchar();
    return 0;
}