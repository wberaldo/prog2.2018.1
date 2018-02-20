#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int soma(int n1, int n2){
		int resultado;
		
		resultado = n1 + n2;
		
		return(resultado);
	}
	
	int v1,v2, resultado;
	
	printf("Digite o primeiro valor:");
  	scanf("%d", &v1);
  	printf("Digite o segundo valor:");
  	scanf("%d", &v2);
  	
  	resultado = soma(v1,v2);
  	
  	printf("\nA soma: %d", resultado);
  	
}
