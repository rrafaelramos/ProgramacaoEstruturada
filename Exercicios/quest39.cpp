#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.c>

int main(){
	int vet[20];
	int aux1,aux2;
	
	srand(time(NULL));
	
	for(int i=0; i<20; i++){
		vet[i]=rand()%10;
	}
	for(int i=20; i>0; i--){
		for(int j=0; j<i-1; j++){
			if(vet[j]>vet[j+1]){
				aux1=vet[j];
				aux2=vet[j+1];
				vet[j]=aux2;
				vet[j+1]=aux1;
			}
		}
	}
	for(int i=0; i<20; i++){
		printf(" %d",vet[i]);
	}
	
	
}
