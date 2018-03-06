#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
	char nome[50],nome2[50],aux,igual;
	int i;
	
	printf("Digite dois nomes: ");
	scanf("%s", &nome[i]);
	scanf("%s", &nome2[i]);
	
	igual = strcmp(nome,nome2);
	
	if(igual < 0) {
      printf("Nome 1 e menor que Nome2\n");
   } else if(igual > 0) {
      printf("Nome2 e menor que Nome1\n");
   } else {
      printf("Nome1 e igual a Nome2\n");
   }
	for(i=0;i<=2;i++) {
   		if(nome[i]>nome2[i]) {
		     strcpy(aux, nome);
		     strcpy(nome, nome2);
		     strcpy(nome2, aux);
		}
	}
	system("Pause");
	return 0;
}
