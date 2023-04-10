#include <stdio.h>

int main() {
	int m [4][4] = { {45,32,83,95},{26,14,37,42},{40,43,65,77},{74,79,48,55} }, soma1 = 0,soma2 = 0;
	
	soma1 += m[1][0]+ m[1][1]+ m[1][2]+ m[1][3];
	soma2 += m[3][0]+ m[3][1]+ m[3][2]+ m[3][3];
	
	if(soma1 > soma2){
		printf("A soma da linha 1 e maior que a da linha 3\n");
	}else{
		printf("A soma da linha 3 e maior que a da linha 1\n");
	}

	return 0;
}
