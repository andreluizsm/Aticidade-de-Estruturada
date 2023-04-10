#include <stdio.h>

int main() {
	int m [4][4] = { {45,32,83,95},{26,14,37,42},{40,43,65,77},{74,79,48,55} }, i, j;
	float soma;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			soma += m[i][j];		
		}
	}
	printf("%.3f", soma/16);

	return 0;
}
