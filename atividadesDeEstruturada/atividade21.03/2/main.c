#include <stdio.h>

int main() {
	float salario, prestacao;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	printf("\nDigite o valor da prestacao do emprestimo: ");
	scanf("%f",&prestacao);
	
	if(prestacao > 0.2*salario){
		printf("\nemprestimo nao concedio");
	}else{
		printf("\nemprestimo concedido");
	}
	
	
	return 0;
}
