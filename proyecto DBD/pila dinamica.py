capacidad = 10
elementos = []

print("Teclea elemento de la pila")

while len(elementos) < capacidad:
    entrada = input()
    
    if entrada.isdigit():
        x = int(entrada)
        if x != -1:
            elementos.append(x)
        else:
            break
    else:
        print("Excepción: Entrada no válida")

print("Elementos de la Pila:", end=" ")
print(*elementos[::-1])

