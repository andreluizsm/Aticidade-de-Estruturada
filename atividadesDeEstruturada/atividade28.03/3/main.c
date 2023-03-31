#include <stdio.h>

int main() {
	int i = 0, numero; 
	scanf("%d",&numero);
	
	system("cls");
	for(i = numero; i <= numero && i >= 0; i--){
		printf("%d\n",i);
	}
	
	return 0;
}
