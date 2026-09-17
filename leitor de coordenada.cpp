#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_CTYPE, "Portuguese");
	
	double x1, y1, x2, y2;
	double distancia;
	
	printf("Digite a coordenada x do 1º ponto: ");
	scanf("%lf", &x1);
	
	printf("Digite a coordenada de y do 1º ponto: ");
	scanf("%lf", &y1);
	
	printf("Digite a Coordenada x do 2º ponto: ");
	scanf("%lf", &x2);
	
	printf("Digite a Coordenada y do 2º ponto: ");
	scanf("%lf", &y2);
	
	
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("\n> A distância entre os pontos é %.2f\n", distancia);
	
	return 0;
}
