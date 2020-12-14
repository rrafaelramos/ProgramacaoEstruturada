#include <stdio.h>

int main(){
	int a,aux=1,aux1=1,aux2=1,teste=0;
	printf("Digite um valor: ");
	scanf(" %d",&a);
	
	for(int i=1; i<a; i++){
		aux+=i;
		aux1+=i+1;
		aux2+=i+2;
		teste=aux*aux1*aux2;
		if(teste==a){
			printf("Triangular!");
			break;
		}else{
			printf("Nao eh triangular!");
			break;
		}
	}
}
