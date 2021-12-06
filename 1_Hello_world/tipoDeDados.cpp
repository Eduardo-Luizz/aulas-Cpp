#include <iostream>
#include <string> //Necessário para usar string

using namespace std;

int main ()
{
    //Criando programa que necessite de nome, idade, altura, sexo, e se foi aprovado.
    string name;
    int age;
    float height;
    char sex;
    
    cout << "Digite seu nome: "; //Eduardo Luiz Zanotto sem uma biblioteca o cin nao reconhece espaço em branco ' '.
    //cin.ignore(); // Limpar o buffer de teclado
    getline(cin, name); // Substituir o cin por isso para ler o espaço em branco

    cout << "Digite sua age: ";
    cin >> age;

    cout << "Digite sua height: ";
    cin >> height;

    cout << "Digite seu sex: ";
    cin >> sex;

    cout << " O aluno " << name << " de idade " << age << ", tem altura " << height << " e eh do sexo " << sex << endl;
    //int //Números inteiros negativos e positivos
    //unsigned int; // Este comando exclui a possibilidade de numeros inteiros negativos
    return 0;
}