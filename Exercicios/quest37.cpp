#include <stdio.h>
#include <conio.c>

int main(){
	int vet[10];
	int cont=0,num;
	int aux1,aux2;

	do{
		printf("Digite um valor: ");
		scanf(" %d",&num);
		vet[cont]=num;
		printf("%d",vet[cont]);
		printf("\n");
		cont++;
	}while(cont<1);
	
	do{
		printf("Digite um valor: ");
		scanf(" %d",&num);
		vet[cont]=num;
		cont++;
		for(int i=cont; i>0; i--){
			for(int j=0; j<cont-1; j++){
				if(vet[j]>vet[j+1]){
					aux1 = vet[j];
					aux2 = vet[j+1];
					vet[j]=aux2;
					vet[j+1]=aux1;
				}
			}
		}
		clrscr();
		for(int i=0; i<cont; i++){
			printf(" %d",vet[i]);
		}
		printf("\n");
	}while(cont<10);
}
