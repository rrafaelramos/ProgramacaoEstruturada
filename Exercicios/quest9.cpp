
#include <stdio.h>

int main(){
	int a,aux=0;
	
	do{
		aux=0;
		printf("Digite um numero: ");
		scanf(" %d",&a);
		for(int i=0; i<=a; i++){
			if(a%i==0){
				aux++;
			}
		}
		if(aux==2)
			printf("%d eh primo\n",a);
		else
			printf("%d nao eh primo\n",a);
	}while(a>0);
	
	return 0;
}

