#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[10][50];
	float nota[10][2];
	float media[10],total[10];
	
		for(int i=0; i<10; i++){
				printf("Digite o nome do aluno %d: ",i+1);
				gets(nome[i]);
				clrscr();
		}
		
		for (int i=0; i<10; i++){
			for(int j=0; j<2; j++){
				printf("Aluno %s, nota %d: ",nome[i],j+1);
				scanf(" %f",&nota[i][j]);
				clrscr();
			}
		}
		
		for (int i=0; i<10; i++){
			for(int j=0; j<2; j++){
				total[i] += nota[i][j];
			}
			media[i]=total[i]/2;
		}
		
		for (int i=0; i<10; i++){
			printf("Aluno %s: ", nome[i]);
			printf(" -- Media: %.2f: ",media[i]);
			for(int j=0; j<2; j++){
				printf(" -- nota %d: %.2f",j+1,nota[i][j]);
			}
			if(media[i]>=6)
					printf(" ->> Aprovado!");
				else
					printf(" ->> Reprovado");
			printf("\n\n");
		}
}
