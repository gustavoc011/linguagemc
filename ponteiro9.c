#include <stdio.h>
#include <stdio.h>

int main (){

system("Clear");

int i;

for(i = 0 ; i < 100 ; i++){
  printf("=");

}
printf("Digite o cadastro /n");
char primeironomedocliente[10];
char primeironomedofuncionario[10];
char nomedoproduto[10];
float preçodoproduto[10];
char formadepagamento[10];

printf("Digite o nome do cliente: /n");
fgets(primeironomedocliente,10,stdin);

printf("Digita o nome do funcionario /n");
fgets(primeironomedofuncionario,10,stdin);

printf("Digita o nome do produto /n");
fgets(nomedoproduto,10,stdin);

printf("Digita o preço do produto /n");
scanf("%d",&preçodoproduto);

printf("Digita a forma de pagamento /n");
fgets(formadepagamento,10,stdin);

FILE *arquivo = fopen ("files/vendas.txt","a");
fprintf(arquivo,"nome %s",primeironomedocliente);
fprintf(arquivo,"nome %s",primeironomedofuncionario);
fprintf(arquivo,"nomedoproduto %s",nomedoproduto);
fprintf(arquivo,"preçodoproduto %s",preçodoproduto);
fprintf(arquivo,"formadepagamento %s",formadepagamento);

fclose(arquivo);
return 0 ;
} 





