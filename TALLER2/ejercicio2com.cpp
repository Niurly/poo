##ejercicio2compilado
#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

int main() {
    int pares = 0, impares = 0;
    srand(time(0));

    for (int i = 0; i < 500; i++) {
        int num = rand() % 51 + 50;
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "La cantidad de números pares es: " << pares << endl;
    cout << "La cantidad de números impares es: " << impares << endl;

    return 0;
}
