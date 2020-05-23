/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
10 caracteres o no y si la longitud es par o impar.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string palabra = "";
    cout << "Ingrese una palabra: "; cin >> palabra; //Solicitando la palabra
    int conteo = string(palabra).size(); //Aplicando la propiedad de conteo del string

    if (conteo > 10) //Evaluando si es mayor a 10
    {
        cout << "La cadena tiene mas de 10 caracteres\n";
    }else{
        cout << "la cadena tiene menos de 10 caracteres\n";
    }
    if ((conteo%2) == 0) //Evaluando es par o impar
        {
            cout << "La longitud de la cadena es par" << endl;
        }
        else{
            cout << "La longitud de la cadena es impar" << endl;
        }
    



    return 0;
}
