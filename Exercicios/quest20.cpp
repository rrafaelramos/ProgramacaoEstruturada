#include <stdio.h>
#include <conio.c>
#include<time.h>
int main(){
	int k,x,num,cont=0;
	int verifica=0;
	
	srand(time(NULL));
	do{
		printf("Digite o valor k: ");
		scanf(" %d",&k);
		printf("Digite o valor x: ");
		scanf(" %d",&x);
		clrscr();
	}while(k>x);
	
	int vet[k];
	
	do{
		num=rand()%x;
		verifica=1;
		for(int i=0; i<cont; i++){
			if(num==vet[i])
				verifica=0;
		}
		if(verifica==1){
			vet[cont]=num;
			cont++;
		}
	}while(cont<k);
	
	for(int i=0; i<k; i++){
		printf(" %d",vet[i]);
	}
	
}
