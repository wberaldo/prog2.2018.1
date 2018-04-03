#include<stdio.h>

int maior(int a,int b){
    if(a>b){
  		return a;
	}
    else{
    	return b;
    }
}

int main(){
int num1,num2,result;

printf("Entre com o primeiro numero: ");
scanf("%d",&num1);

printf("Entre com o segundo numero: ");
scanf("%d",&num2);

result = maior(num1,num2);

printf("\nO maior numero e: %d",result);

return 0;
}

