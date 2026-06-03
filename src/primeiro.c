//importaçao da biblioteca de entrada e saida
#include <stdio.h>

// o programa inicia e executa a partir da funçao main
int main(){

  //declaraçao da variel j como o tipo int(inteiro)
  int j;
  
  // vamos pedirv a usuarios digitar um valor
  // inteiro para ser guardado na variavel ]
  printf("Digita um numero inteiro o tecle Enter;/n");

  //o camando scanf sera utilizado para caturar o
  //numero initeiro que o usuario ira digitar. o caracter
  //f do scan e usado para indicar qual sera o formato
  //de dado digitado pelo pelo usuarios. Neste caso, usaremos
  //%d que indicar que o usuarios digitou e um numero
  //decimal este numero sera alocado no endereço de
  // memoria da variavel j. portanto, usuremos &}, para
  // indicar o endereço da variaçao 
  scanf("%d",&j);
  printf("O valor digitado pelo usuario e %d/n/n",j);
  return 0 ; //Infirma ao compilador que o programa acabou

}