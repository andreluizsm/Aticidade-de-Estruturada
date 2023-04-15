#include <stdio.h>
#define MAIOR printf("Maior de idade")
#define MENOR printf("Menor de idade")

int main() {
	
	int idade;
	char nome[30];
	scanf("%s%d",&nome,&idade);
	
	if(idade >= 18){
		MAIOR;
	}else{
		MENOR;
	}
	
	
	
	
	
	
	return 0;
}
