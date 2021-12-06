#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    //system(" cls ");

    int N;

    cout << "Digite um valor para receber a tabuada: ";
    cin >> N;

    for (int i = 0; i <= 10; i++){
        cout << i << " X " << N << " = " << (i * N) << endl;
    }
}