//Faça uma função chamada divisão que retorne a divisão inteira de dois números inteiros passados por parâmetro
// e através de um parâmetro por referência, o resto da divisão.

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
