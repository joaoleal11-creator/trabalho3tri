#include <stdio.h>

int main() {
    int n, i;
    float venda, total = 0, media;

    // Lê a quantidade de vendas (até 10)
    do {
        printf("Quantas vendas deseja registrar? (1 a 10): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    float vendas[n];

    // Lê os valores das vendas
    for (i = 0; i < n; i++) {
        printf("Digite o valor da venda %d: R$ ", i + 1);
        scanf("%f", &venda);
        vendas[i] = venda;
        total += venda;
    }

    // Mostra todas as vendas
    printf("\nVendas registradas:\n");
    for (i = 0; i < n; i++) {
        printf("Venda %d: R$ %.2f\n", i + 1, vendas[i]);
    }

    // Calcula e mostra média
    media = total / n;
    printf("\nTotal das vendas: R$ %.2f\n", total);
    printf("Média das vendas: R$ %.2f\n", media);

    return 0;
}
