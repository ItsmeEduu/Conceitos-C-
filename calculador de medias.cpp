#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_CTYPE, "Portuguese");
	
	double nota1, nota2, nota3;
	double media;
	
	printf("Digite a primeira nota: ");
	scanf("%lf", &nota1);
	
	printf("Digite a Segunda nota: ");
	scanf("%lf", &nota2);
	
	printf("digite a Terceira nota: ");
	scanf("%lf", &nota3);
	
	
	
	media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 4)) / (1 + 2 + 4);
	
	printf("\n> A média das notas são: é %.2f.\n", media);
	
	return 0;
	
}
