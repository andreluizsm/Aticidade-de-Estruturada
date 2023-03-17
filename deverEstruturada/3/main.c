#include <stdio.h>
#include <math.h>

int main() {
	float altura, largura, lataTinta = 2, consumoTinta = 0.3, area = 0, quantasLatas = 0;  	
	
	printf("Informe a altura e largura do muro em metros: ");
	scanf("%f%f", &altura, &largura);
	
	area = largura * altura;
	
	quantasLatas = ceil((area * consumoTinta) / lataTinta);
	
	printf("Serao necessarias %.0f latas de tinta", quantasLatas);
	
	
  return 0;
}
