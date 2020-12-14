#include <stdio.h>

int main(){
	
	int a,b,aux=0;
	printf("Digite o primeiro valor: ");
	scanf(" %d",&a);
	printf("Digite o segundo valor: ");
	scanf(" %d",&b);
	
	for (int i=1; i<=a*b; i++){
		if((i%a==0)&&(i%b==0)){
			aux=i;
			printf("MMC: %d",aux);
			break;
		}
	}
	
}
