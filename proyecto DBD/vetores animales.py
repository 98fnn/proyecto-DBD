print("aves")

aves = ["flamenco", "Cuervo", "guacamaya", "pinguino", "quetzal", "buho"]

print("Ingrese los valores desde teclado:")

for i in range(5):
    valor = input(f"Valor {i + 1}: ")
    aves.append(valor)

print("Valores finales del vector:")
for ave in aves:
    print(ave)
