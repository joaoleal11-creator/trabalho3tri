# For — Tabuada

n = int(input("Digite um número inteiro: "))

print(f"\nTabuada do {n}:\n")
for i in range(1, 11):
    print(f"{n} x {i} = {n * i}")
