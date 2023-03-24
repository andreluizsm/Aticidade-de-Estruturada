#include <stdio.h>

int main() {
	float custo = 0, freteDespesas = 0, final = 0, valor = 0; 
	
	printf("Informe o custo da mercadoria: ");
	scanf("%f", &custo);
	
	printf("Informe o valor do frete e despesas: ");
	scanf("%f",&freteDespesas);
	
	custo += freteDespesas;
	
	printf("Qual o valor de venda?: ");
	scanf("%f", &valor);
	
	final = ((valor - custo)/valor)*100;
	
	printf("A porcentagem de lucro e: %.2f %%", final);
	
	return 0;
}
