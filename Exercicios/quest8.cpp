#include <stdio.h>
#include <conio.c>
#include <math.h>

int main(){
	int a,b,aux=0,parar;
	char op;
	do{
		printf("Deseja qual operacao?\n soma (+), subtracao (-), multiplicacao (*), divisao inteira (/), exponenciacao (^) resto de divisao (%%), Parar (0):  ");
		scanf(" %c",&op);
		if(op=='0') 
			break;
		printf("\nDigite o primeiro valor: ");
		scanf(" %d",&a);
		printf("Digite o segundo valor: ");
		scanf(" %d",&b);
		
		switch (op){
			case '+': aux=a+b; 
				break;
			case '-': aux=a-b;
				break;
			case '*': aux=a*b;
				break;
			case '/': aux=a/b; 
				break;
			case '^': aux=pow(a,b); 
				break;
			case '%': aux=a%b; 
				break;
		}
		printf("\nResultado: %d\n\n",aux);
		aux=0;
	}while(op!=0);
}
