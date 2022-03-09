#include <iostream>

using namespace std;

int main ()
{
    int numero1;
    int numero2;

    int tipoOperacion;

    cout << "Indique el tipo de operacion que desea realizar" << endl;
    cout << "Si desea sumar ingrese 1 sabiendo que: Primer valor + Segundo valor" << endl;
    cout << "" << endl;
    cout << "Si desea restar ingrese 2 sabiendo que: Primer valor - Segundo valor" << endl;
    cout << "" << endl;
    cout << "Si desea multiplicar ingrese 3 sabiendo que: Primer valor * Segundo valor" << endl;
    cout << "" << endl;
    cout << "Si desea dividir ingrese 4 sabiendo que: Primer valor / Segundo valor" << endl;
    cout << "" << endl;
    cin >> tipoOperacion;

    cout << "Ingrese primer valor " << endl;
    cin >> numero1;

    cout << "Ingrese segundo valor " << endl;
    cin >> numero2;


    if (tipoOperacion == 1){
        cout << "El resultado de la suma es: " << (numero1+numero2) <<endl;
    } else if (tipoOperacion == 2) {
        cout << "El resultado de la resta es: " << (numero1-numero2) <<endl;
    } else if (tipoOperacion == 3) {
        cout << "El resultado de la multiplicacion es: " << (numero1*numero2) <<endl;
    } else if (tipoOperacion == 4) {
        if (numero2 == 0) {
            cout << "No se puede dividir entre cero" <<endl;
        } else {
            cout << "El resultado de la division es: " << (numero1/numero2) <<endl;
        }
    } else {
        cout << "El tipo de operacion que ingreso no es valida";
    }

    return 0;
}
