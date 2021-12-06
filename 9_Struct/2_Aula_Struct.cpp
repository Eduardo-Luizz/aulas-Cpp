#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>

struct dadosmotor
{
    int potencia;
    int qtdcilindros;
    int qtdcavalos;
};

struct carro{
    string marca;
    string modelo;
    int anofab;
    int anomodelo;
    struct dadosmotor motor; // preciso colocar um nome depois da struct chamada
};

struct carro carro[1]; // mudei o nome da struct original

int main(){

    system(" cls ");

    carro[0].marca = "Ford";
    carro[0].modelo = "Eco Sport";
    carro[0].anofab = 2015;
    carro[0].anomodelo = 2015;
    carro[0].motor.potencia = 145;
    carro[0].motor.qtdcilindros = 784;
    carro[0].motor.qtdcavalos = 2000;

    cout << "A marca do carro comprado eh : " << carro[0].marca << endl;
    cout << "A modelo do carro comprado eh : " << carro[0].modelo << endl;
    cout << "O ano de fabricacao eh : " << carro[0].anofab << endl;
    cout << "O ano do modelo eh : " << carro[0].anomodelo << endl;
    cout << "A potencia do carro comprado eh : " << carro[0].motor.potencia << endl;
    cout << "A quantidade de cilindros eh : " << carro[0].motor.qtdcilindros << endl;
    cout << "A quantidade de cavalos do carro comprado eh : " << carro[0].motor.qtdcavalos << endl;
    
}