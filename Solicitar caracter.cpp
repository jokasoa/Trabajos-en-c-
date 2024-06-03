# Solicitar al usuario un carácter
caracter = input("Ingrese un carácter (z): ")

# Solicitar al usuario la cantidad de veces que debe repetirse el carácter
cantidad = int(input("Ingrese la cantidad de veces que desea que se repita el carácter: 15 "))

# Usar un bucle for para imprimir el carácter repetido
for _ in range(cantidad):
    print(caracter, end='z')

# Añadir una nueva línea al final para que el prompt no se quede en la misma línea
print()
