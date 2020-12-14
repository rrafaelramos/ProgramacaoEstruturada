#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char nome1[50],nome2[50];
	int cont1,cont2;
	
	gets(nome1);
	
	cont1 = strlen(nome1);
	cont2 = strlen(nome1)-1;
	
	for(int i=0; i<cont1; i++){
		nome2[cont2] = nome1[i];
		cont2--;
	}
	
	nome2[cont1]='\0';
	printf("\n%s",nome2);

}
