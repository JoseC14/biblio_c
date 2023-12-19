#include "geometria.h"
#include <math.h>

const float PI = 3.14;

//FUNÇÃO DE PERIMETRO
double perimetro_quadrado(double aresta){
	return aresta * 4;
}

//FUNÇÃO DE AREA DO QUADRADO
double area_quadrado(double aresta)
{
	return pow(aresta,2.00);
}

//FUNCAO DE CIRCUFERENCIA
double circuferencia(double raio)
{
	return (2.00*PI*raio);
}

//FUNCAO DE AREA DO CIRCULO
double area_circulo(double raio)
{
	return PI * (pow(raio,2.00));
}

//FUNCAO DA DIAGONAL
double diagonal(double aresta)
{
	return aresta * sqrt(2);
}
