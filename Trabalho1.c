//Fa�a uma fun��o chamada divis�o que retorne a divis�o inteira de dois n�meros inteiros passados por par�metro
// e atrav�s de um par�metro por refer�ncia, o resto da divis�o.

#include<stdio.h>

float divisao(int num1, int num2, int *resto){
	*resto = num1 / num2;
	
	return *resto;
}

int main(){
	int a,b,c;
	float resposta;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite um numero: ");
	scanf("%d", &b);
	
	resposta = divisao(a,b,&c);
	
	printf("Resultado da divisao: %f", resposta);
}
