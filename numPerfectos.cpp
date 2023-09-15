// Implemente un program que imprima los n numeros perfectos.
// 6 = 1 + 2 + 3
// 28 = 1 + 2 + 4 + 7 + 14 == 1^3 + 3^3,
// 496 = 1^3+ 3^3 + 5^3 + 7^3,
// 8128 = 1^3 + 3^3 + 5^3 + 7^3 + 9^3 + 11^3 + 13^3 + 15^3.
// 550.336 = 1^3 + 3^3 + 5^3 + 7^3 + 9^3 + 11^3 + 13^3 + 15^3 + 17^3. + 19^3
// Los números perfectos son aquellos números cuya suma de sus divisores (excluido él mismo) es igual al propio número.


#include <iostream>
using namespace std;

int numPerfecto(int numero) {
    int suma = 0;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    if (suma == numero) return 1;
    else return 0;
}

int main() {
    int n, cont = 0, num = 2;

    cout << "Introduce la cantidad de números perfectos que deseas (más de 4 es peliloso): ";
    cin >> n;

    while (cont < n) {
        if (numPerfecto(num)) {
            cout << num << " ";
            cont++;
        }
        num++;
    }

    return 0;
}