#include <stdio.h>
#include <conio.h>

int main(){
	int num, aux=0;
	
	printf("Digite o numero:");
	scanf(" %d",&num);
	
	for (int i=1; i<num; i++){
		if(num%i==0){
			aux += i;
		}
	}
	if(aux == num)
		printf("O número %d é um num. perfeito",num);
	else
		printf("O número %d não é um num. perfeito",num);
	return 0;
	
}
