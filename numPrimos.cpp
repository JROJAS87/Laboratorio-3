// Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos. Si ingresa 20. Debe imprimir: 2 3 5 7 11 13 17 19. Un numero es primo si es divisible unicamente entre 1 y el mismo #include <iostream>


#include <iostream>
using namespace std;

int numPrimo(int numero) {
    if (numero <= 1) return 0;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, num = 2;

    cout << "Introduce un número primo (se mostrará los números primos posteriores al ingresado) : ";
    cin >> n;

    while (num <= n) {
        if (numPrimo(num)) {
            cout << num << " ";
        }
        num++;
    }

    return 0;
}