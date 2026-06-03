#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    //declaraçao da variavel char(character) letra, simbolo,numero
    char letra = 'T';

    //declaraçao da variavel char para guardar uma palavra, ou seja,uma
    //string(cada caracteres) _ uma coleçao de caracteres

    char nome[10] = "Raimundo";

    printf("%c\n", letra);
    printf("%s\n", nome);
    printf("%c\n",nome[0]);
    return 0;
}