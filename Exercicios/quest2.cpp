#include <stdio.h>

int main (){
	int a, aux=1;
	printf("Digite um valor: ");
	scanf(" %d",&a);
	
	for(int i=0; i<a; i++){
		aux+=aux*i;
	}
	
	printf(" %d",aux);
}
