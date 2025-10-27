# Strings + for — Contar vogais

linha = input("Digite uma linha de até 100 caracteres: ")

vogais = "aeiou"
contador = 0

for char in linha.lower():  # converte tudo para minúsculo
    if char in vogais:
        contador += 1

print(f"\nNúmero de vogais na linha: {contador}")
