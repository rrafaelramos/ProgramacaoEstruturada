#include <stdio.h>

int main(){
	
	int a,aux=0;
	
	scanf(" %d",&a);
	for (int i=1; i<=a; i++){
		if(i%2!=0){
			aux+=i;
			if(aux==a)
				break;
		}
	}
	if(aux==a)
		printf("%d eh um Numero quadrado",a);
	else
		printf("%d nao eh um numero quadrado",a);
	
}
