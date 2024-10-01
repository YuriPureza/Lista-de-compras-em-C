#include <stdio.h>
#include <string.h>

int main() {

int refazer = 3;
char lista_Produtos[20][20] = {"pao","leite", "ovo","achocolatado", "farinha", "manteiga"};;

  struct listaCompras_M {
    float escolha[6][5];
    char lista_Produtos[15][15];
    int j;
    float total;
    
  };
  struct listaCompras_M mercado;
  

  printf("|------------Lista de Compras-----------|\n");
  printf("|Pao(0) --------------------------- 5,50|\n");
  printf("|Leite(1) ------------------------- 6,70|\n");
  printf("|Ovo(2) --------------------------- 1,70|\n");
  printf("|Achocolatado(3) ------------------ 8,99|\n");
  printf("|Farinha(4) ----------------------- 5,90|\n");
  printf("|Manteiga(5) --------------------- 10,20|\n");
  printf("|_______________________________________|\n");

  printf("Quantos produtos deseja comprar?\n");
  scanf("%d", &mercado.j);
  
  printf("\n");


  for (int i = 0; i < mercado.j; i++){
    printf("Digite o codigo do produto desejado-> %d: ", i);
    scanf("%f", &mercado.escolha[i][0]);

    printf("Digite a quantidade desejada do produto -> %d: ", i);
    scanf("%f", &mercado.escolha[i][1]);

    printf("Digite o preco do produto -> %d ", i);
    scanf("%f", &mercado.escolha[i][2]);

    mercado.escolha[i][3] = mercado.escolha[i][2] * mercado.escolha[i][1];
    
    mercado.total = mercado.total + mercado.escolha[i][3];
  };

  printf("|-----------------------Lista de compras-----------------------\n");
  printf("|Produto              Quantidade           Preco          Valor\n");


  for (int i = 0; i < 5; i++) { 
  printf("|%.f                    %.2f                %.2f           %.2f\n", mercado.escolha[i][0], mercado.escolha[i][1], mercado.escolha[i][2], mercado.escolha[i][3]);
  };
  
printf("|----------------------------------------------------------------\n");
printf("Total: %.2f\n", mercado.total);


  
  
 

printf("Escolha uma das opcoes:\n");
printf("1 -    Refazer a tabela\n");
printf("2 -                Sair\n");
scanf("%d", &refazer);


switch(refazer)
  { 
    
  case 1:
  printf("|------------Lista de Compras-----------|\n");
  printf("|Pao(0) --------------------------- 5,50|\n");
  printf("|Leite(1) ------------------------- 6,70|\n");
  printf("|Ovo(2) --------------------------- 1,70|\n");
  printf("|Achocolatado(3) ------------------ 8,99|\n");
  printf("|Farinha(4) ----------------------- 5,90|\n");
  printf("|Manteiga(5) --------------------- 10,20|\n");
  printf("|_______________________________________|\n");

  printf("Quantos produtos deseja comprar?\n");
  scanf("%d", &mercado.j);
  
  printf("\n");


  for (int i = 0; i < mercado.j; i++){
    printf("Digite o codigo do produto desejado-> %d: ", i);
    scanf("%f", &mercado.escolha[i][0]);

    printf("Digite a quantidade desejada do produto -> %d: ", i);
    scanf("%f", &mercado.escolha[i][1]);

    printf("Digite o preco do produto -> %d ", i);
    scanf("%f", &mercado.escolha[i][2]);

    mercado.escolha[i][3] = mercado.escolha[i][2] * mercado.escolha[i][1];
    
    mercado.total = mercado.total + mercado.escolha[i][3];
  };

  printf("|-----------------------Lista de compras-----------------------\n");
  printf("|Produto              Quantidade           Preco          Valor\n");
  
for (int i = 0; i < 5; i++) { 
  printf("|%.f                    %.2f                %.2f           %.2f\n", mercado.escolha[i][0], mercado.escolha[i][1], mercado.escolha[i][2], mercado.escolha[i][3]);
  getchar();
  break;
  };
 printf("|---------------------------------------------------------------\n");
 printf("Total: %30.2f\n", mercado.total);
  break;

  case 2:
    printf("Muito obrigado por usar e volte sempre");
  break;
    
  default:
    printf("Valor invalida");
  break;
  };

  
  getchar();

  return 0;
}
