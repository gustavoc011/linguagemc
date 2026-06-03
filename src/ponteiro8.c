#include <stdio.h>
#include <stdlib.h>

int main(){

 system("Clear");
 int i;
 for(i = 0 ; i < 100 ; i++){
    printf("=");
 }
 printf("/nPrograma de cadastro/n");
 char primeironome[10];
char sobrenome[10];
char email[50];
int idade;

printf("Digite o seu primeiro nome: /n");
fgets(primeironome,10,stdin);

printf("Digite seu sobrenome: /n");
fgets(sobrenome,10,stdin);

printf("Digite o seu e-mail: /n");
fgets(email,50,stdin);

printf("Digite a sua idade: /n");
scanf("%d",&idade);

//vamos criar um arquivo de texto para guarda os dados dos clientes
FILE *arquivo = fopen ("files/cadastro.txt","a");
fprintf(arquivo,"Nome: %s/n",primeironome);
fprintf(arquivo,"sobrenome %s",sobrenome);
fprintf(arquivo,"E-Mail: %s",email);
fprintf(arquivo,"Idade: %s",idade);
//vamos fechar o arquivo
fclose(arquivo);
return 0;
}
