#include <stdio.h>
#include <conio.c>
#include <string.h>

int main(){
	char string[50],letra;
	int cont=0;
	
	printf("Digite uma frase:\n");
	gets(string);
	
	printf("Digite um letra: ");
	letra = getchar();
	
	int num=strlen(string);
	
	puts(string);
	
	for(int i=0; i<num; i++){
		if(string[i]==letra){
			string[i]='^';
		}
			printf("%c",string[i]);
	}
	
}
