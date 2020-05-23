//Realizar un programa en c++ que verifique si un número es par o impar.
#include<iostream>
using namespace std;
int main(){
    int numero;
    cout << "\tIngrese un numero para analizar si es impar o par\n";
    cin >> numero;
    if((numero%2) == 0){
        cout << "El numero " << numero << " es par";
    } else {
        cout << "El numero " << numero << " es impar";
    }

    return 0;
}