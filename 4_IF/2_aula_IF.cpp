#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    system(" cls ");

    float nota;

    cout << "Digite a nota : ";
    cin >> nota;

    if(nota >= 7.0) {
        cout << "Voce foi aprovado com a nota : " << nota << endl;
        cout << "Parabens foi aprovado" << endl;
    } else {
        cout << "Voce foi reprovado com nota : " << nota << endl;
    }
}