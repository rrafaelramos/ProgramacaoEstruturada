#include <stdio.h>
#include <conio.c>
#include<time.h>

int main(){
	int vet[50];
	int par=0,impar=0;
	int maior=0, menor=999,aux=0,media=0;
	
	srand(time(NULL));
	for (int i=0; i<50; i++){
		vet[i]=rand()%100;
	}
	printf("\nValores digitados: ");
	for (int i=0; i<50; i++){
		aux+=vet[i];
		if(vet[i]%2==0)
			par++;
		else
			impar++;
			
		if(vet[i]>maior)
			maior=vet[i];
		if(vet[i]<menor)
			menor=vet[i];
		printf(" %d",vet[i]);
	}
	media=aux/50;
	printf("\nPares: %d - Impar: %d",par,impar);
	printf("\nMédia: %d",media);
	printf("\nMaior: %d - Menor: %d",maior,menor);
	
	return(0);
}
