#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
#include <time.h>

int main(){
	int vet[50];
	int aux1, aux2;
	srand(time(NULL));
	
	for (int i=0; i <50; i++){
		vet[i]=rand()%10;
	}
	for(int i=0; i<50; i++){
			printf(" %d",vet[i]);
	}
	
	printf("\n\n");
	
	for(int i=50; i>0; i--){
		for(int j=0; j<i-1; j++){
			if(vet[j]==0){
				aux1=vet[j];
				aux2=vet[j+1];
				vet[j]=aux2;
				vet[j+1]=aux1;
			}
		}
	}
	
	for(int i=0; i<50; i++){
			printf(" %d",vet[i]);
	}
	
	printf("\n\n");
	
	for(int i=0; i<50; i++){
		if(vet[i]!=0){
			printf(" %d",vet[i]);
		}
	}
}
