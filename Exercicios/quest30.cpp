#include <stdio.h>
#include <conio.c>
#include <string.h>

int main(){
	char string[50];
	int cont=1;
	
	printf("Digite uma frase:\n");
	gets(string);
	
	int num=strlen(string);
	
	for(int i=0; i<num; i++){
		if(string[i]==' ')
			cont++;
	}

	printf("A String possui %d palavras",cont);
}
