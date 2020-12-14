#include <stdio.h>
#include <conio.c>

int main(){
	int vet[10];
	int cont=1,num;
	int aux;
	
	do{
		printf("Digite um valor: ");
		scanf(" %d",&aux);
		vet[0]=aux;
		break;
	}while(1);
		
	do{
		printf("Digite um valor: ");
		scanf(" %d",&num);
		if(num<=aux){
			vet[cont]=num;
			aux=num;
			cont++;
		}else{
			printf("Digite um valor menor!\n");
		}
	}while(cont<10);
	
	for(int i=0; i<10; i++){
		printf(" %d",vet[i]);
	}
}
