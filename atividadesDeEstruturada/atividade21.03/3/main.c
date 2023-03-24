#include <stdio.h>

int main() {
	float n1,n2,n3;
	
	printf("Digite 3 numeros: ");
	scanf("%f%f%f", &n1,&n2,&n3);
	
	if(n1 == n2 || n1 == n3 || n2 == n3){
		printf("numeros iguais");
	}else{
		if(n2 > n1 && n2 > n3){
			printf("maior numero: %.2f",n2);
		}else if(n3 > n1 && n3 > n2){
			printf("maior numero: %.2f",n3);
		}else if(n1 > n2 && n1 > n3){
			printf("maior numero: %.2f",n1);
		} 
		
		if(n2 < n1 && n2 < n3){
			printf("\nmenor numero: %.2f",n2);
		}else if(n3 < n1 && n3 < n2){
			printf("\nmenor numero: %.2f",n3);
		}else if(n1 < n2 && n1 < n3){
			printf("\nmenor numero: %.2f",n1);
		}
	}	
	
	return 0;
}















