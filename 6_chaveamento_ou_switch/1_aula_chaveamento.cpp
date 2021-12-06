#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    system(" cls ");

    int a;
    
    cout << "Digite um numero inteiro positivo: ";
    cin >> a;

    /* Aqui eu crio casos dentro desse chaveameto e crio casos, se ele condizer com algum dos casos ele entre nesse 
    chaveamento e executa o código que está dentro*/
    /*Melhor que if*/
    
    switch (a){ 
        case 1: cout << "UM";
        break; //Cada caso precisa ter um break, senao ele mostrara tudo
        case 2: cout << "DOIS";
        break;
        case 3: cout << "TRES";
        break;
        case 4: cout << "QUATRO";
        break;
        case 5: cout << "CINCO";
    }
}