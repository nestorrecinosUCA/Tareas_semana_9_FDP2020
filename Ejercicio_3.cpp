//Realizar un programa en c++ que verifique si un número es positivo, negativo o cero.
#include<iostream>
using namespace std;
int main(){
    int numero;
    cout << "Digite un numero para anilzar si es positivo, negativo o cero\n";
    cin >> numero;
    if(numero > 0){
        cout << "El numero es positivo = " << numero;
    }else if(numero==0){
        cout << "El numero es cero = " << numero;
    }else{
        cout << "El numero es negativo = " << numero; 
    }

    return 0;
}