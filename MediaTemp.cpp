#include <stdio.h>

int main() {
    float temp[7];
    float soma = 0, media, maior, menor;
    int acima = 0;

    // Leitura e soma
    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    // Média
    media = soma / 7;

    // Maior e menor
    maior = temp[0];
    menor = temp[0];

    for (int i = 1; i < 7; i++) {
        if (temp[i] > maior) {
            maior = temp[i];
        }
        if (temp[i] < menor) {
            menor = temp[i];
        }
    }

    // Dias acima da média
    for (int i = 0; i < 7; i++) {
        if (temp[i] > media) {
            acima++;
        }
    }

    printf("Media: %.2f C\n", media);
    printf("Maior temperatura: %.2f C\n", maior);
    printf("Menor temperatura: %.2f C\n", menor);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}
