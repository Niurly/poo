##ejercicio2
import random 
pares=0
impares=0

for _ in range(500):
    num=random.randint(50,100)
    if num%2==0:
        pares=pares+1
    else:
        impares=impares+1
print("La cantidad de números pares es",pares)
print("La cantidad de números impares es",impares)