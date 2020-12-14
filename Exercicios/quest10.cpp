#include <stdio.h>
#include <conio.c>

int main(){
	int x,y,aux=0;
	do{
 		printf("Informe o primeiro numero ! \n");
 		scanf(" %d",&x);
 		printf("Informe o segundo numero ! \n");
 		scanf(" %d",&y);
	}while(x>y);
	
	for(x=x; x<=y; x++){
		aux=0;
		for(int j=1; j<=x; j++){
			if(x%j==0){
				aux++;
			}
		}
		if(aux==2){
			printf(" %d",x);
		}
	}
	return 0;
}
