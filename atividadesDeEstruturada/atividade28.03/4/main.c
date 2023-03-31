#include <stdio.h>

int main() {
	int i,idade[4],maior[4] = {0},soma = 0, media = 0;

	for(i = 0; i <= 4; i++){
		scanf("%d",&idade[i]);
		soma += idade[i];
		
		if(idade[i] > 18){
			maior[i] = idade[i];
		} 
	}

	media = soma/5;
	
	for(i = 0; i <= 4; i++){
		if(maior[i] > 18){
			printf("As idade maiores de 18 sao: %d\n",maior[i]);
		}	
	}
	
	printf("\nA media das idades e: %d",media);

	return 0;
}
