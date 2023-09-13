#include<stdio.h>
main(){
    int ddd;
    printf("Digite o seu DDD");
    scanf("%d", &ddd);

    switch(ddd){
        case 61: printf("Brasilia");
        break;
        case 71: printf("\nSalvador");
        break;
        case 11: printf("\nSao Paulo");
        break;
        case 21: printf("\nRio de Janeiro");
        break;
        case 32: printf("\nJuiz de fora");
        break;
        case 19: printf("\ncampinas");
        break;
        case 27: printf("\nVitoria");
        break;
        
        default:
        printf("O ddd nao corresponde a nenhuma cidade");



    }





}