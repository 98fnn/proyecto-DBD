filas = 3
columnas = 4
matriz = [[0] * columnas for _ in range(filas)]

# Leer elementos de la matriz
for i in range(filas):
    for j in range(columnas):
        matriz[i][j] = int(input(f"Ingrese el elemento en la fila {i} y columna {j}: "))

# Imprimir la matriz
print("Matriz ingresada:")
for i in range(filas):
    for j in range(columnas):
        print(matriz[i][j], end=" ")
    print()
