#include <iostream>

using namespace std; // Sem está atribuição eu sou obrigado antes de cada linha colocar std::COMANDO

int calculo(int *a){
    cout << a << endl;
    return 0;
}

int main()
{
    int y = 5;
    int x; 
    cout << calculo(&y) << endl;

  /*  cout << "Hello, World, I am Zanotto, Eduardo Luiz" << endl;
    cout <<"Estamos na aula de Estrutura de dados 1" << endl;
    return 0; //Boa prática
    */

}