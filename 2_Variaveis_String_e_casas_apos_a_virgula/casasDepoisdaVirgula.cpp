#include <iostream>
#include <iomanip> // Necessario para incluir a regra de casas depois da vírgula

using namespace std;

int main()
{
    float numReal = 1.5;
    int numInt = 33;

    cout << fixed << setprecision(2) << numReal; //São estas as 2 function necesssárias para colocar a quantidade de casas apos a virgula
    cout << endl;
    cout << setw(5) << setfill('0') << numInt; // Aqui eu pedi pra mostrar em tamanho 5 e onde faltar numeros para dar os cinco preencher com 0 
    return 0;
}