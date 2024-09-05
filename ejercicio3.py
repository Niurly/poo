##ejercicio3
import random
num_sucursales = 25

sucursales = [f'Sucursal {i+1}' for i in range(num_sucursales)]
ventas = [random.randint(1000, 5000) for _ in range(num_sucursales)]  
promedio_ventas = sum(ventas) / num_sucursales

sucursales_mayores_al_promedio = [sucursales[i] for i in range(num_sucursales) if ventas[i] > promedio_ventas]

print(f'Promedio de ventas: {promedio_ventas:.2f}')
print('Sucursales con ventas mayores al promedio:')
for sucursal in sucursales_mayores_al_promedio:
    print(f' - {sucursal}')