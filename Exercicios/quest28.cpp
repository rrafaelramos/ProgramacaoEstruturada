#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
#include <time.h>

int main(){
	int x,cont=0,tamanho=0;
	
	srand(time(NULL));
	
	
	printf("Digite o valor x: ");
	scanf(" %d",&x);
	
	
	for(x=x; x>=1; x--){
		cont=0;
		for(int j=x; j>=1; j--){
			if(x%j==0){
				cont++;
			}
		}
		if(cont==2){
			tamanho++;
			int vet[tamanho];
			vet[tamanho]=x;
			printf(" %d",vet[tamanho]);
		}
	}
}
