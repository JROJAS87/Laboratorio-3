// Implemente un programa que imprima los n numeros de la secuencia de fibonacci 
// 1 1 2 3 5 8 13 21 34 55 89 144 ...


#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, siguiente;

    cout << "Introduce la cantidad de términos de Fibonacci que deseas: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return 0;
}