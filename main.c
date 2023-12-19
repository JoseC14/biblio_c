//ALUNO: JOSÉ CARLOS PEREIRA VIEIRA
#include <stdio.h>
#include "geometria.h"

int main()
{
	double medida;
	printf("Digite a medida: ");
	scanf("%lf",&medida);
	printf("Circuferencia do circulo %.2lf \n",circuferencia(medida));
	printf("Area do circulo %.2lf \n", area_circulo(medida));
	printf("Perímetro do quadrado %.2lf \n",perimetro_quadrado(medida));
	printf("Area do quadrado %.2lf \n", area_quadrado(medida));
	printf("Diagonal do quadrado %.2lf\n", diagonal(medida));
	return 0;
}
