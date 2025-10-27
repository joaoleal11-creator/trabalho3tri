# Programa: Classificador de Número

# Lê um número inteiro do usuário
numero = int(input("Digite um número inteiro: "))

# Verifica se é positivo, negativo ou zero
if numero > 0:
    print("O número é positivo.")
elif numero < 0:
    print("O número é negativo.")
else:
    print("O número é zero.")

# Verifica se é par ou ímpar
if numero % 2 == 0:
    print("O número é par.")
else:
    print("O número é ímpar.")

