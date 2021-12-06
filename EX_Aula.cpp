#include <iostream>
#define total 5

using namespace std;

int main(){
    int contagem = 0;
    int valores [total];

    for (int i = 0; i < total; i++)
    {
        cout << "Digite o valor: " << i << ": ";
        cin >> valores [i];
    }
    for(int i = 0; i < total; i++)
    {
        cout << valores [i] << endl;
    }
}