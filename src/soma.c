#include <stdio.h>
int main (){

   int num1;
   int num2;
   int soma;
   printf ("Digite um numero inteiro e tecle Enter/n");
   scanf("%d", &num1);
   
   printf("digita outro numero inteiro e tecle Enter/n");
   scanf("%d", &num2);

   //vamos realzar uma soma entre duas varial (num1 e num2)
   //e alocar o resultado na variavel soma
   soma = num1 + num2;

   printf("A soma dos numeros %d e %d resultou em %d/n",num1,num2,soma);

    return 0; 
}