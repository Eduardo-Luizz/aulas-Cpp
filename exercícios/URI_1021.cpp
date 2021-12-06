#include <iostream>

using namespace std;

int main () {

    double valor;
    int c100;
    int c50;
    int c20;
    int c10;
    int c5;
    int c2;
    int m1;
    int m50;
    int m25;
    int m10;
    int m05;
    int m01;

    /*Interface de entrada*/
    cout.fixed;
    cout.precision(2);
    cout << "Qual e o valor em R$ : "; // não pode ir para o URI
    cin >> valor;

    /*Processamento dos resultados*/

    c100 = valor / 100;     //576 / 1000 = 5.76 5 cédulas de cem
    valor = valor - (c100 * 100);    // Troco
    
    c50 = valor / 50;
    valor = valor - (c50 * 50);

    c20 = valor / 20;
    valor = valor - (c20 * 20);

    c10 = valor / 10;
    valor = valor - (c10 * 10);

    c5 = valor / 5;
    valor = valor - (c5 * 5);

    c2 = valor / 2;
    valor = valor - (c2 * 2);
    m1 = valor;

    valor = (valor - m1) * 100; 

    m50 = valor / 50;
    valor = valor - (m50 * 50);

    m25 = valor / 25;
    valor = valor - (m25 * 25);

    m10 = valor / 10;
    valor = valor - (m10 * 10);

    m05 = valor / 5;
    valor = valor - (m05 * 5);

    m01 = valor;
    
    /*Interface de apresentação dos dados*/

    cout << "NOTAS:" << endl;
    cout << c100 << " nota(s) de R$ 100.00" << endl;
    cout << c50 << " nota(s) de R$ 50.00" << endl;
    cout << c20 << " nota(s) de R$ 20.00" << endl;
    cout << c10 << " nota(s) de R$ 10.00" << endl;
    cout << c5 << " nota(s) de R$ 5.00" << endl;
    cout << c2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m05 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;
    
}