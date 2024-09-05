##ejercicio3comp
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int num_sucursales = 25;
    vector<string> sucursales;
    vector<int> ventas;
    int suma_ventas = 0;

    srand(time(0));

    for (int i = 0; i < num_sucursales; i++) {
        sucursales.push_back("Sucursal " + to_string(i + 1));
        int venta = rand() % 4001 + 1000; 
        ventas.push_back(venta);
        suma_ventas += venta;
    }

    double promedio_ventas = suma_ventas / static_cast<double>(num_sucursales);

    vector<string> sucursales_mayores_al_promedio;
    for (int i = 0; i < num_sucursales; i++) {
        if (ventas[i] > promedio_ventas) {
            sucursales_mayores_al_promedio.push_back(sucursales[i]);
        }
    }

    cout << "Promedio de ventas: " << promedio_ventas << endl;
    cout << "Sucursales con ventas mayores al promedio:" << endl;

    for (const string& sucursal : sucursales_mayores_al_promedio) {
        cout << " - " << sucursal << endl;
    }

    return 0;
}
