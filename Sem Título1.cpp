#include<stdio.h>
#include<stdlib.h>

int soma(int num1,int num2)
{
  return(num1+num2);
}
int subtrair(int num1,int num2)
{
  return(num1-num2);
}

int main()
{
int resp,resp1,n1,n2,opcao;
  printf("\nDigite 2 numeros do teclado: \n");
  scanf("%d",&n1);
  scanf("%d",&n2);
  printf("\nDigite 1 - Soma ou 2 - Subtrair: ");
  scanf("%d", &opcao);
  if(opcao == 1){
  	resp = soma(n1,n2);
  	printf("\nSoma = %d\n", resp);
  }
  if(opcao == 2){
  	resp1 = subtrair(n1,n2);
  	printf("\nSubtracao = %d\n", resp1);
  }
  if(opcao < 1 || opcao > 2){
  	printf("\nOpcao n existe!\n");
  }
  
  system ("Pause");
  return 0;
}
