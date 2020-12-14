#include <stdio.h>
#include<conio.c>

int main(){
	int x,y,n,aux=0;
	
	printf("Digite um valor: ");
	scanf(" %d",&n);
	x=n*3;
	y=n;
	
	for (n=n; n<=x; n++){
		aux=0;
		for(int i=1; i<=x; i++){
			if(n%i==0)
				aux++;
		}
		if(aux==2 && n>y){
			printf("Maior primo: %d",n);
			break;
		}
	}
	
	for(n=n; n>=1; n--){
		aux=0;
		for(int i=1; i<=n; i++){
			if(n%i==0){
				aux++;
			}
		}
		if(aux==2 && n<y){
			printf("\nMenor numero primo: %d",n);
			break;
		}
	}
	return 0;
}
