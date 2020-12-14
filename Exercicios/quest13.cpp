#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,c;
	
	scanf(" %d",&a);
	scanf(" %d",&b);
	scanf(" %d",&c);
	
	if(((a+b)<c)&&((a+c)<b)&&((b+c)<a)){
		printf("nao eh um triangulo");
	}else{
		printf("eh um triangulo");
	}
	return(0);
}
