#include <stdio.h>
#define MEDIA(n1,n2,n3,n4) (n1+n2+n3+n4)/ 4
int main() {
	int n1 = 0,n2 = 0,n3 = 0,n4 = 0,media = 0;
 
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	
	media = MEDIA(n1,n2,n3,n4);
	printf("%f", media);	

	return 0;
}
