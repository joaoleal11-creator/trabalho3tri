# Vetor — Maior, menor e média (10 posições)

numeros = []  # cria a lista (vetor) vazia

for i in range(10):
    num = int(input(f"Digite o {i+1}º número: "))
    numeros.append(num)  # adiciona o número na lista

maior = max(numeros)
menor = min(numeros)
media = sum(numeros) / len(numeros)

print("\nResultados:")
print(f"Maior número: {maior}")
print(f"Menor número: {menor}")
print(f"Média dos números: {media:.2f}")
