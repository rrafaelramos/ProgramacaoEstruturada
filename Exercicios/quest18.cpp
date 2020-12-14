#include <stdio.h>
#include <conio.c>

int main(){
	int vet[10],op,i=0;

	printf("Deseja valores impar(1) ou par(2)? ");
	scanf(" %d",&op);
	
	switch (op){
		case 1:
			printf("Vc escolheu impar: \n");
			for(int i=0; i<10; i++){
				printf("Digite um num impar: ");
				scanf(" %d",&vet[i]);
				if(vet[i]%2==0){
					printf("%d nao eh impar! -> ",vet[i]);
					i--;
				}
			}
			break;
		case 2:
				printf("Vc escolheu par: \n");
			for(int i=0; i<10; i++){
				printf("Digite um num par: ");
				scanf(" %d",&vet[i]);
				if(vet[i]%2!=0){
					printf("%d nao eh par! -> ",vet[i]);
					i--;
				}
			}
			break;
	}
		
	printf("\nValores Digitados: ");	
	for (int i=0; i<10; i++){
		printf(" %d",vet[i]);
	}
		
	return(0);
}
