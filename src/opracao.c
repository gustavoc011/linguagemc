#include <stdio.h>
int main (){

int num1;
int num2;
int divisao;
int menos;
int multiplicar;
int soma;

printf("Digite um numero inteiro e tecle Enter\n");
scanf("%d" , &num1);

printf("digita outro numero inteiro e tecle Enter\n");
scanf("%d" , &num2);

divisao = num1 / num2;
menos = num1 - num2;
multiplicar = num1 * num2;
soma = num1 + num2;

printf("A soma dos numeros %d e %d resultou em %d\n",num1,num2,soma);
printf("A divisao dos numeros %d e %d resultou em %d\n",num1,num2,divisao);
printf("A multiplicar dos numeros %d e %d resultou em %d\n",num1,num2,multiplicar);
printf("A menos dos numeros %d e %d resultou em %d\n",num1,num2,menos);

return 0;

}