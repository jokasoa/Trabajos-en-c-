import random

# Función para simular el lanzamiento de dos dados
def lanzar_dados():
    dado1 = random.randint(1, 6)
    dado2 = random.randint(1, 6)
    return dado1, dado2

# Bucle for para dar al usuario 3 oportunidades
for intento in range(1, 4):
    dado1, dado2 = lanzar_dados()
    suma = dado1 + dado2
    
    print(f"Intento {intento}: Dado 1 = {dado1}, Dado 2 = {dado2}, Sumatoria = {suma}")
    
    # Comprobar condiciones de victoria
    if dado1 == dado2:
        print("¡Ganaste! Ambos dados tienen el mismo número.")
        break
    elif suma == 7:
        print("¡Ganaste! La sumatoria de los dados es 7.")
        break
else:
    print("Lo siento, no ganaste en 3 intentos.")

# Añadir una nueva línea al final para que el prompt no se quede en la misma línea
print()
