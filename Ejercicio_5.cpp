/*Realizar un programa en c++ que verifique si la palabra ingresada inicia y
finaliza con la misma letra*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char palabra[50]; //Declaracion de la variable con un margen de digitos
    cout << "Digite una palabra: "; cin >> palabra; //Solicitud de datos 
    
    int conteo = strlen(palabra); //Se declara una variable con el numero de caracteres digitados, sin iniciar del 0
    if(palabra[0] == palabra[conteo-1]){ //Condicion que compara la igualdad entre la primera posicion de la palabra con la ultima, restando 1 posicion final
        cout << "La palabra tiene la misma letra al incio y al final";
    }else{
        cout << "La palabra no tiene la misma letra al incio y al final";
    }

    return 0;
}