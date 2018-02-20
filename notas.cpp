#include<stdio.h>
#include<stdlib.h>

int main(){
	int notas[10];
	int media, soma=0, i;
	int cont;
	
	for(i=0; i<=9; i++){
		printf("\nDigite a nota: ");
		scanf("%d", &notas[i]);
		
		soma = soma + notas[i];				
	}
	media = soma / 10;
	
	for(i=0; i<=9; i++){
		if(notas[i]>media)
			cont++;
	}
	printf("\nA media: %d", media);
	printf("\nQuantidade de alunos com nota acima da media: %d", cont);
	system("PAUSE");
}
