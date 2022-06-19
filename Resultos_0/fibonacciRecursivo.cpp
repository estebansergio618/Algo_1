// Fibonacci.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
// Escribir la funci�n de Fibonacci que dado un entero n devuelve el n-�simo n�mero de Fibonacci.
// Los n�meros de Fibonacci empiezan con F0=0,F1=1.Fn = F(n-1) + F(n-2) 

#include <iostream>
using namespace std;


int fib(int n) {
    int res;
    if (n == 0) {
        res = 0;
    }
    else if (n == 1) {
        res = 1;
    }
    else {
        res = fib(n - 1) + fib(n - 2);
    }
    return res;
}

int main() {
    int n;
    cout << "Ingresar un entero para retornar el enesimo elemento de la sucesion de Fibonacci hecho de forma recursiva:" << endl;
    cin >> n;
    cout << "El valor es " << fib(n) << endl;
    return 0;
}

