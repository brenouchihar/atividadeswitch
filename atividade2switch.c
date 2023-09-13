#include <stdio.h>

#include <stdlib.h>

int main(void){

int codigo_produto, quantidade;

float valor_unitario,valor_total;

 

printf("Bem vindo(a) a Lanchonete da Yasmin\n");  

printf("Listagem do Cardapio\n");  

printf("100 - Cachorro Quente -> R$10,10\n");

printf("101 - Bauru Simples -> R$8,30\n");

printf("102 - Bauru com Ovo -> R$8,50\n");

printf("103 - Hamburguer -> R$12,50\n");

printf("104 - Cheeseburguer -> R$13,25\n");

printf("105 - Suco -> R$2,20\n");

printf("106 - Refrigerante -> R$1,00\n");

 

printf("Digite o codigo do Produto:\n");    

scanf("%d", &codigo_produto);

 

switch(codigo_produto){

 case 100:

  valor_unitario = 10.10 ;

  break;

 case 101:

  valor_unitario = 8.30;

  break;

 case 102:  

  valor_unitario = 8.50;

  break;

 case 103:  

  valor_unitario = 12.50;

  break;

 case 104:  

  valor_unitario = 13.25;

  break;

 case 105:  

  valor_unitario = 2.20;

  break;    

 case 106:  

  valor_unitario = 1.00;

  break;  

 default:

  printf("Produto nao registrado no sistema.");

  system("pause");

  return 0;  

   

}

 

printf("Digite a quantidade:\n");    

scanf("%d", &quantidade);  

 

valor_total = valor_unitario * quantidade;  

 

printf("Valor Total => R$ %.2f\n",valor_total);

 

system("pause");

return 0;  

 

}

