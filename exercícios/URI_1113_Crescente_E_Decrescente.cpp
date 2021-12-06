#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    system(" cls ");

    int X;
    int Y;

    while (X != Y){
        
        //cout << "Digite um valor : "; // Para uri aceitar
        cin >> X;

        //cout << "Digite um valor : "; // Para uri aceitar
        cin >> Y;
        
        if (X > Y){
            cout << "Decrescente" << endl;
        } else if (X < Y){
            cout << "Crescente" << endl;
        } //else {                     // Para uri aceitar
            //cout << "Acabou";
        //}/
    }
}