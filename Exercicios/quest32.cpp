#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.c>

int main(){
	int mat[4][4];
	int v;
	srand(time(NULL));
	
	printf("Preencha a matriz: \n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			scanf(" %d",&mat[i][j]);
		}
	}
	
	printf("Digite um valor: ");
	scanf(" %d",&v);
	
	for(int i=0; i<4; i++){
		printf("\n");
		for(int j=0; j<4; j++){
			textcolor(GREEN);
			if(mat[i][j]>v){
				textcolor(RED);
			}
			printf(" %d",mat[i][j]);
		}
	}
}
