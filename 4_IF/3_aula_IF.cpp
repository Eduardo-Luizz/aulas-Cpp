#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    system(" cls ");

    float  a;
    float  b;
    float  c;

    cout << "Digite um numero : ";
    cin >> a;
    
    cout << "Digite um numero : ";
    cin >> b;

    cout << "Digite um numero : ";
    cin >> c;


    if ((a > b) && (a > c)) {
        cout << "O maior valor digitado foi a com : " << a << endl;
    } else { // Ou pode ser usado também o else if 
        if ((b > a) && (b > c)) {
            cout << "O maior valor digitado foi b com : " << b << endl;
        } else {
            cout << "O maior valor digitado foi c com : " << c << endl;
        }
    }
    return 0;
}