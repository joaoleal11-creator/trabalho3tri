#include <stdio.h>

int main() {
    int n, i;
    
    // Lê a quantidade de funcionários (1 a 10)
    do {
        printf("Quantos funcionários deseja cadastrar? (1 a 10): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    int ids[n];
    double salarios[n];

    // Cadastro dos funcionários
    for (i = 0; i < n; i++) {
        printf("\nDigite o ID do funcionário %d: ", i + 1);
        scanf("%d", &ids[i]);
        printf("Digite o salário do funcionário %d: R$ ", i + 1);
        scanf("%lf", &salarios[i]);
    }

    int opcao;
    do {
        // Menu
        printf("\nMenu:\n");
        printf("1) Listar todos os funcionários\n");
        printf("2) Mostrar maior salário e ID\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nLista de funcionários:\n");
            for (i = 0; i < n; i++) {
                printf("ID: %d, Salário: R$ %.2lf\n", ids[i], salarios[i]);
            }
        } else if (opcao == 2) {
            double maior = salarios[0];
            int id_maior = ids[0];
            for (i = 1; i < n; i++) {
                if (salarios[i] > maior) {
                    maior = salarios[i];
                    id_maior = ids[i];
                }
            }
            printf("\nMaior salário: R$ %.2lf (ID: %d)\n", maior, id_maior);
        } else if (opcao != 0) {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Saindo do sistema...\n");

    return 0;
}
