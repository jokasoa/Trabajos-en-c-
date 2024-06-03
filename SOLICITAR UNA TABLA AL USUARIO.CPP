# Solicitar al usuario una tabla de multiplicar
tabla = int(input ("Ingrese la tabla de multiplicar que desea: "))

# Usar  un bucle for para imprimir la tabla de multiplicar

for i in range(1, 13):
    resultado = tabla * i
    print(f"{tabla} x {i} = {resultado}")
