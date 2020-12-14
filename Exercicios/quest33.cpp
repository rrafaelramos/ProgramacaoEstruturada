#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.c>

int main(){
	int mat[10][10];
	int x;
	int linha,coluna,maior=-1;
	
	printf("Digite o valor x: ");
	scanf(" %d",&x);
	
	srand(time(NULL));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			mat[i][j]=rand()%x;
		}
	}
	for(int i=0; i<10; i++){
		printf("\n");
		for(int j=0; j<10; j++){
			if(mat[i][j]>maior){
				maior=mat[i][j];
				linha=i+1;
				coluna=j+1;
			}
			printf(" %d",mat[i][j]);
		}
	}	
	printf("\nO maior valor esta na linha %d, coluna %d",linha,coluna);
	
	
}
