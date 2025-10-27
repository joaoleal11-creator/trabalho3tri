# If/else + for — Teste de primo

n = int(input("Digite um número inteiro (n ≥ 2): "))

if n < 2:
    print("Número inválido. Digite um número maior ou igual a 2.")
else:
    primo = True
    menor_divisor = None

    for i in range(2, n + 1):
        if n % i == 0:
            if i == n:
                # Não encontrou divisor menor que n
                primo = True
            else:
                primo = False
                menor_divisor = i
                break

    if primo:
        print(f"{n} é primo.")
    else:
        print(f"{n} não é primo. Menor divisor >1: {menor_divisor}")
