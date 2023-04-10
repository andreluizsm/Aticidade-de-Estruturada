#include <stdio.h>

int main() {
	int m [4][4] = { {45,32,83,95},{26,14,37,42},{40,43,65,77},{74,79,48,55} }, i, j;
	float mult;
	
	mult += m[0][1]* m[1][1]* m[2][1]* m[3][1];
	printf("%.1f",mult);

	return 0;
}
