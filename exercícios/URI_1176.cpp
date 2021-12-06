/*Oque é fibonacci soma o numero com o anterior
0
1
1
2
3
5
*/
#include <iostream>

using namespace std;

int vtFibonacci [61];

void preencherFibonacci();

int main () {
    int qdt, q = 0;
    int posicao;
    preencherFibonacci ();

    cout << "Quantos numeros de Fibonacci você quer ver? " << endl;
    cin >> qdt;

    while (q < qdt)
    {
        cout << q << "o. valor = ";
        cin >> posicao;
        if((posicao >= 0) && (posicao <= 60)){
            cout << "Fib("<< posicao << ") = " << vtFibonacci[posicao] << endl; 
            q++;

        } else {
            cout << "Erro: valor fora do limite ! " << endl << " Digite outro";
        }
    }
}

void preencherFibonacci (){
    vtFibonacci [0] = 0;
    vtFibonacci [1] = 1;

    for(int i = 2; i <= 60; i++){
        vtFibonacci [i] = vtFibonacci [i - 1] + vtFibonacci[i - 2];
    }
}