#include <stdio.h>
#include <stdlib.h>

int main(){

 system("Clear");
 char nomecompleto[30];
 //Vamos usar uma funçao para obter
 //todos os caracteres digitados pelo
 //usuario na tela de terminal
 //O nome da funçao e fgets
 printf("Digita o seu nome completo/n");
 fgets(nomecompleto,30,stdin);
 printf("Ola, Sr(a) %s/n",nomecompleto);
}