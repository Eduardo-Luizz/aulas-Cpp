#include <iostream>
using namespace std;
#include <stdlib.h>

int main()
{
    system(" cls ");

    for (int I = 1; I <= 39; I+=3) {
        cout << "I=" << I << endl;
    }

    cout << endl << endl;

    for (int J = 60; J >= 0; J-= 5) {
        cout << "J=" << J << endl;
    }

    cout << endl;
    return 0;

}