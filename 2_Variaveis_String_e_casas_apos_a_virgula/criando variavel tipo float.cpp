#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, media;           //Declarei as tres variaveis
    cout << endl << "Digite a nota 1: "; // comando de saida
    cin >> nota1;                        //comando de entrada traduzindo oq for lido coloque na variavel nota

    cout << endl << "Digite a nota 2: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;        //calculo da variavel media

    cout << endl << "A media das notas foi: " << media; //mostrei o resultado da variavel
    return 0;
}