//Realizar un programa en c++ que verifique si un número es divisible entre otro.
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Este programa verifica si un numero es divisible entre otro\nPor favor ingresa dos numeros:\n";
    cin >> num1 >> num2;

    if((num1%num2) == 0){
        cout << "El numero " << num1 << " es divisible entre " << num2;
    }else{
        cout << "El numero " << num1 << " no es divisible entre " << num2;
    }

    return 0;
}