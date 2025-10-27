# While — Soma e média até sentinela

soma = 0
quantidade = 0

numero = int(input("Digite um número inteiro (-1 para encerrar): "))

while numero != -1:
    soma += numero
    quantidade += 1
    numero = int(input("Digite outro número (-1 para encerrar): "))

if quantidade > 0:
    media = soma / quantidade
    print(f"\nQuantidade de números: {quantidade}")
    print(f"Soma dos números: {soma}")
    print(f"Média dos números: {media:.2f}")
else:
    print("\nNenhum número foi digitado.")
