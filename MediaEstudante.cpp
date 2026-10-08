#include <stdio.h>

int main() {
    float notas[3][4];
    float soma, media;
    float maiorMedia = 0;
    int melhorEstudante = 0;

    // Leitura
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite a %da nota do %do estudante: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Médias e maior média
    for (int i = 0; i < 3; i++) {
        soma = 0;                       // zera a cada novo estudante

        for (int j = 0; j < 4; j++) {
            soma += notas[i][j];
        }

        media = soma / 4;
        printf("Media do estudante %d: %.2f\n", i + 1, media);

        if (media > maiorMedia) {
            maiorMedia = media;
            melhorEstudante = i + 1;
        }
    }

    printf("Maior media: estudante %d - %.2f\n", melhorEstudante, maiorMedia);

    return 0;
}
