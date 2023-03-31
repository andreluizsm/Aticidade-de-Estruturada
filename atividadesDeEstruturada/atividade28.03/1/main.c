#include <stdio.h>

int main() {
    int i, n, direction = 1;
    
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    
    if(n > 0){
    	for(i = 0; i <= n; i++){
    		printf("%d\n", i);
		}
	}else{
		for(i = 0; i >= n; i--){
			printf("%d\n",i);
		}
	}
    
    printf("\nContagem terminada\n");
    return 0;
}

