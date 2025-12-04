#include <iostream>
#include <string>
#include "Fraccion.h"

using std::string;
using std::cout;
using std::cin;


int main()
{
    Fraccion arreglo[5];
    int num, den;

    cout << "Introduce cinco fracciones\n";

    for(int i{0}; i < 5; i++)
    {
        cout << "\nFraccion " << i+1 << "\n";
        cout << "Numerador: ";
        cin >> num;
        
        do{
            cout << "Denominador: ";
            cin >> den;

            if(den == 0)
            {
                cout << "Error, vuelve a intentarlo.\n";
            }
        }while(den == 0);

        arreglo[i].set_num(num);
        arreglo[i].set_den(den);
    }

    Fraccion sumatoria(0, 1);

    // Sumar todas las fracciones
    for(int i = 0; i < 5; i++)
    {
        sumatoria = sumatoria.sumar(arreglo[i]);
    }

    cout << "\nResultado final\n";
    cout << "Sumatoria total: " << sumatoria.to_string() << "\n";

    return 0;

}