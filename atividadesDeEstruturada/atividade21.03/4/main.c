#include <stdio.h>

int main() {
	float n1, n2, n3, n4, media;
		
	printf("Digite 4 notas: ");
	scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
	
	media = (n1+n2+n3+n4)/4;
	
	if(media >= 0 && media <= 3){
		printf("Reprovado");
	}else if (media >= 3.1 && media <= 6.9){
		printf("Recuperacao");
	}else{
		printf("Aprovado");
	}
	 	
	return 0;
}
