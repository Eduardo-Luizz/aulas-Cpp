#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    srand(time(NULL));

    int vetor[20], aux;

    for (int i = 0; i < 20; i++)
    {
        vetor[i]= rand()%1000;
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = i+1; j < 20; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < 20; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}