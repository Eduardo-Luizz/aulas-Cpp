/*Solicitar ao usuário, o preenchimento do seguinte vetor de estrutura.
Após o preenchimento dos dados, ordenar o vetor em ordem alfabética de nome e mostrar o vetor
ordenado na tela.
*/

#include <iostream>
#define TAM 3
#include <string.h>

using namespace std;

struct pessoa
{
    string nome;
    unsigned short int altura;
    double peso;
};

struct pessoa ar[TAM];

int main()
{
    for (int index = 0; index < TAM; index ++)
    {
        cout << "nome Pessoa" << index << ": ";
        cin >> ar[index].nome;
        cout << "altura Pessoa" << index << ": ";
        cin >> ar[index].altura;
        cout << "peso Pessoa" << index << ": ";
        cin >> ar[index].peso;

        for (int num = 0; num < index; num ++)
        {
            if(ar[index].nome < ar[num].nome)
            {
                string temp = ar[index].nome;
                ar[index].nome = ar[num].nome;
                ar[num].nome = temp;
            }
        }
    
    }
    for (int index = 0; index < TAM; index ++)
    {
        cout << "\nPessoa : " << ar[index].nome << endl;
        cout << "Altura : " << ar[index].altura << endl;
        cout << "Peso : " << ar[index].peso << endl;
        cout << endl;
    }
}