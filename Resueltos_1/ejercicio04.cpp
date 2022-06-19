// Repetici�n controlada por un centinela y uso de acumuladores.
// Reciba como entrada un entero de tipo binario, conteniendo s�lo 0s y 1s.

#include <iostream>

using namespace std;

int unidad(int n) {
    return n % 10;
}

int numeroSinUnidad(int n) {
    return n / 10;
}

int main()
{
    int numeroBinario, valorPosicional = 1;

    // Acumulador
    int numeroDecimal = 0;

    cout << "Ingrese n�mero en binario: \n";
    cin >> numeroBinario;

    while (numeroBinario > 0)
    {
        numeroDecimal = numeroDecimal + unidad(numeroBinario) * valorPosicional;
        numeroBinario = numeroSinUnidad(numeroBinario);
        valorPosicional = valorPosicional * 2;
    }

    cout << "El n�mero en decimal es: " << numeroDecimal;

    return 0;
}
