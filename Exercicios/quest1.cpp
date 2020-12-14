#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,a;
	int par=0;
	int impar=0;
	
	printf("Digite a qntidade de numeros a serem somados: ");
	scanf(" %d",&num);
	
	printf("Digite os 
	numeros a serem somados: ");
	
	for (int i=0; i<num; i++){
		scanf(" %d",&a);
		if(a % 2==0)
			par +=a;
		else
			impar+=a;
	}
	
	printf(" Soma pares: %d\n Soma impares: %d",par,impar);
	return 0;

}
