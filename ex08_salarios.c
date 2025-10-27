# Vetor de salários — Menu: Listar ou Média

# Lê quantidade de salários (1 a 10)
while True:
    n = int(input("Quantos salários deseja cadastrar? (1 a 10): "))
    if 1 <= n <= 10:
        break
    else:
        print("Número inválido. Tente novamente.")

# Lê os salários
salarios = []
for i in range(n):
    salario = float(input(f"Digite o {i+1}º salário: R$ "))
    salarios.append(salario)

# Menu
while True:
    print("\nMenu:")
    print("1) Listar salários")
    print("2) Média dos salários")
    print("0) Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        print("\nLista de salários:")
        for idx, s in enumerate(salarios, start=1):
            print(f"{idx}º salário: R$ {s:.2f}")
    elif opcao == "2":
        media = sum(salarios) / len(salarios)
        print(f"\nMédia dos salários: R$ {media:.2f}")
    elif opcao == "0":
        print("Saindo do sistema...")
        break
    else:
        print("Opção inválida. Tente novamente.")
