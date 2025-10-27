# RH — Menu simples: INSS ou Hora Extra

while True:
    salario = float(input("Digite o salário mensal do colaborador: R$ "))

    print("\nMenu:")
    print("1) Calcular INSS (8% do salário)")
    print("2) Calcular valor das horas extras")
    print("0) Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        inss = salario * 0.08
        print(f"INSS (8% do salário): R$ {inss:.2f}\n")
    elif opcao == "2":
        horas_extras = float(input("Digite a quantidade de horas extras: "))
        valor_hora = salario / 220
        valor_hora_extra = valor_hora * 1.5 * horas_extras
        print(f"Valor das horas extras: R$ {valor_hora_extra:.2f}\n")
    elif opcao == "0":
        print("Saindo do sistema...")
        break
    else:
        print("Opção inválida. Tente novamente.\n")
