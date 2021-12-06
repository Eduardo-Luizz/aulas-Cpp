#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    system(" cls ");

    float valor1, valor2, maior;

    cout << "Digite o valor 1 : ";
    cin >> valor1;

    cout << "Digite o valor 2 : ";
    cin >> valor2;


    (valor1 == valor2) ? cout << "iguais" : cout << "diferentes" << endl; //Funciona como uma condicao
    
    (valor1 >= valor2) ? maior = valor1 : maior = valor2; // Descobrir o maior valor entre duas variaveis
    cout << maior << endl;


    return 0;
}