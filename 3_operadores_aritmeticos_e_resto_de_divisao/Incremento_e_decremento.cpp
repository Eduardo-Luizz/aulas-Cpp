#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    system(" cls ");

   /*tem o dividio /= 
   o multiplicado *= 
   tem o += 
   tem o -= 
   e o %= */

    int valor;
    int decre;

    valor = 20;
    valor++; // valor = valor + 1 é a mesma coisa que valor += 1

    decre = 1000;
    decre--;

    cout << "O incremento foi de : " << valor << endl;
    cout << "O decremento foi de : " << decre << endl;
    cout << "O decremento foi de : " << (valor+= 10) << endl;
    return 0;
}
