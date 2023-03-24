#include <stdio.h>
	
int main(){
	
	float pi = 3.14, resultado = 0,raio = 0;
	
	printf("Qual o raio do circulo?: ");
	scanf("%f",&raio);
	
	resultado = pi *(raio*raio);
	printf("A area e: %.2f", resultado);
	
	return 0;
}

