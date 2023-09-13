#include<stdio.h>
main(){
    int dia;

    printf("Digite um numero correspondente ao dia da semana");
    scanf("%d", &dia);

    switch(dia){
        case 1: printf("Domingo");
        break;
        case 2: printf("\nSegunda");
        break;
        case 3: printf("\nTerca-feira");
        break;
        case 4: printf("\nQuarta-feira");
        break;
        case 5: printf("\nQuinta-feira");
        break;
        case 6: printf("\nSexta-feira");
        break;
        case 7: printf("\nSabado");
        break;

        default:
        printf("\nO numero nao e correspondente a nenhum dia da semana");
    }



}