import sympy as sp

def resolver_ecuacion(funcion, valor):
    return funcion.evalf(subs={x: valor})

def resolver_derivada(funcion, valor):
    return sp.diff(funcion, x).evalf(subs={x: valor})

iterador = 0
xi = 0.0
xi_xi = 0.0
ultimo_xi = 0.0

print("Método de Newton-Raphson")
funcion_str = input("Ingrese la función f(x): ")
x = sp.symbols('x')
funcion = sp.sympify(funcion_str)
print(f"Problema: f(x) = {funcion_str}")

print("Derivada: f'(x) calculada simbólicamente")
print("")

print("+------+-------------+-------------+-------------+-------------+-------------+")
print("|   i  |    f(x)     |    f'(x)    |    xi + 1   |      e      |    e (%)    |")
print("+------+-------------+-------------+-------------+-------------+-------------+")

xi = float(input("Ingrese el valor inicial (xi): "))
epsilon = float(input("Ingrese la tolerancia deseada (epsilon): "))

while True:
    fxi = resolver_ecuacion(funcion, xi)
    _fxi = resolver_derivada(funcion, xi)
    xi_1 = xi - (fxi / _fxi)
    e = abs(xi_1 - xi)
    e_percent = (e / abs(xi)) * 100 if xi != 0 else 0
    print(f"|{iterador:6} |{fxi:12.6f} |{_fxi:12.6f} |{xi_1:12.6f} |{e:12.6f} |{e_percent:12.6f}|")
    iterador += 1
    ultimo_xi = xi
    xi = xi_1
    xi_xi = abs(xi - ultimo_xi)
    if xi_xi < epsilon:
        print("+------+-------------+-------------+-------------+-------------+-------------+")
        print(f"La raíz aproximada es x = {xi:.6f} con tolerancia epsilon = {epsilon}")
        break

