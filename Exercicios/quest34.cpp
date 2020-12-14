#include <stdio.h>
#include <conio.c>
#include <time.h>

int main(){
	int n;
	srand(time(NULL));
	
	printf("Digite um valor n: ");
	scanf(" %d",&n);
	
	int mat[n][n];
	
	for (int i=0; i<n; i++){
		printf("\n");
		for(int j=0; j<n; j++){
			mat[i][j]=1+rand()%10;
			printf(" %d",mat[i][j]);
		}
	}
	printf("\n\n");
	for (int i=0; i<n; i++){
		printf("\n");
		for(int j=0; j<n; j++){
			printf(" %d",mat[j][i]);
		}
	}
	
	
}
