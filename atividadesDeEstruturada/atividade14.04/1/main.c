#include <stdio.h>
#define SOMA(n1,n2) n1 + n2 
#define SUBTRAI(n1,n2) n1 - n2 
#define MULTIPLICA(n1,n2) n1 * n2 
#define DIVIDE(n1,n2) n1 / n2 

int main() {
	int n1,n2,total;
	
	printf("Escreva 2 numeros: ");
	scanf("%d%d",&n1, &n2);
	
	total = SOMA(n1,n2);
	printf("%d",total);
	
	
	return 0;
}
