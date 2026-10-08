#include <stdio.h>

int main () {
	int vendas[3][4];
	int totalGeral = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Digite a Qtde do %do produto no %do dia: ", i + 1, j + 1);
			scanf("%d", &vendas[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++) {
		int totalProduto = 0;
		for (int j = 0; j < 4; j++) {
			totalProduto += vendas[i][j];
		}
		printf("Produto %d: %d unidades\n", i + 1, totalProduto);
		totalGeral += totalProduto;
	}
	printf("Total geral: %d unidades\n", totalGeral);
	
	return 0;
}
