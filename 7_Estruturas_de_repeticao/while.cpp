#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    system(" cls ");

    int number = 10;

    while (number){
        cout << number << endl;
        number = number - 1;
        if (number > 0) continue; // continue faz voltar para o laco de repeticao
        cout << "isto sera mostrado ?";
    }
}