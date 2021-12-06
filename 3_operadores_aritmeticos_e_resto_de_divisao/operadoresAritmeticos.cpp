#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    system(" cls ");

    int a, b, c, d;
    a = b = c = d = 10;
    float nota;

    cout << "Digite a nota: ";
    cin >> nota;

    if(nota >= 7) { //Criar blocos quando é mais de um comando no if {} 
        cout << "Aprovado" << endl;
    }
    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
}
