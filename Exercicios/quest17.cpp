#include <stdio.h>
#include <conio.c>
#include <time.h>


int main(){
	int x,y,num;
	char letra;
	
	srand(time(NULL));
	printf("Digite um valor x: ");
	scanf(" %d",&x);
	printf("Digite um valor y: ");
	scanf(" %d",&y);
	
	int continua=1;
	do{
		printf("Tecle 'A' para aleatorio e 'S' para sair:\n");
		scanf(" %c",&letra);
		
		if(letra=='a'){
			clrscr();
			num = x+rand()%y;
			printf(" %d\n\n",num);
		}
		if(letra=='s'){
			continua=0;
		}
		if(letra!='s'&&letra!='a'){
			clrscr();
			printf("Tecla invalida!\n");
		}
		
	}while(continua);
}
