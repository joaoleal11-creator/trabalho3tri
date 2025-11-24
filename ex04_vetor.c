#include <stdio.h>

int main() {
    int vet[10];
    int i, maior, menor;
    float soma = 0;

    // Leitura dos 10 inteiros
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // Inicializa maior e menor com o primeiro item
    maior = menor = vet[0];

    // Processa o vetor
    for (i = 0; i < 10; i++) {
        if (vet[i] > maior)
            maior = vet[i];
        if (vet[i] < menor)
            menor = vet[i];
        soma += vet[i];
    }

    // Resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", soma / 10);

    return 0;
}

