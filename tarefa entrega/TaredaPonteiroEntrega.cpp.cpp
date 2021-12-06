#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;

//----------------------------------------------------------------

struct Node
{
    int valorDoNode;
    Node *proxNode;
};

//----------------------------------------------------------------

class ListaEncadeada
{
    private:
        Node *cabeca, *cauda;
    public:
    ListaEncadeada()
    {
        cabeca = NULL;
        cauda = NULL;
    }

    //---------------------------------------------------------------*
    
    void inserirNode(int valorDeEntrada)
    {
        Node *temp = new Node;
        temp -> valorDoNode = valorDeEntrada;
        temp -> proxNode = NULL;
        if (cabeca == NULL)
        {
            cabeca = temp;
            cauda = temp;
            temp = NULL;
        }
        else
        {
            cauda -> proxNode = temp;
            cauda = temp;
        }
    }

    //---------------------------------------------------------------*

    void exibDoNode()
    {
        Node *temp = new Node;
        temp = cabeca;
        if (temp == NULL)
        {
            cout << "Sem elementos na lista!" << endl;
        }
        else {
            while (temp != NULL)
            {
                cout << temp -> valorDoNode << endl;
                temp = temp -> proxNode;
            }
        }
        system("PAUSE");
    }

    //---------------------------------------------------------------*

    void excluirPrimeiroNode()
    {
        Node *temp = new Node;
        temp = cabeca;
        if (temp == NULL)
        {
            cout << "Sem elementos na lista!" << endl;
        }
        else 
        {
            cabeca = cabeca -> proxNode;
            cout << "Remove elemento:  " << temp -> valorDoNode << endl;
            delete temp;
        }
        system("PAUSE");
    }

    //---------------------------------------------------------------*

    void excluirUltimoNode()
    {
        Node *atual = new Node;
        Node *anterior = new Node;
        atual = cabeca;
        if (atual == NULL) {
            cout << "Sem elementos na lista!" << endl;
        } else {
            while (atual -> proxNode != NULL)
            {
                anterior = atual;
                atual = atual -> proxNode;
            }
            cauda = anterior;
            anterior -> proxNode = NULL;
            cout << "Remove elemento:  " << atual -> valorDoNode << endl;
            delete atual;
        }
        system("PAUSE");
    }
};

//---------------------------------------------------------------*

int main()
{
    int opcaoMenu, valorDeEntrada;
    ListaEncadeada ListaEncadeada;
    while (opcaoMenu != 5)
    {
        system("CLS");
        cout << "________ Menu de Opcoes ________" << endl;
        cout << "1 - Insere elementos" << endl;
        cout << "2 - Remove o primeiro elemento" << endl;
        cout << "3 - Remove o ultimo elemento" << endl;
        cout << "4 - Lista os elementos" << endl;
        cout << "5 - Sair" << endl;
        cout << "Qual a escolha :  ";
        cin >> opcaoMenu;
        system("CLS");
        switch (opcaoMenu)
        {
        case 1:
            cout << "Informe o Valor: ";
            cin >> valorDeEntrada;
            ListaEncadeada.inserirNode(valorDeEntrada);
            break;
        case 2:
            ListaEncadeada.excluirPrimeiroNode();
            break;
        case 3:
            ListaEncadeada.excluirUltimoNode();
            break;  
        case 4:
            ListaEncadeada.exibDoNode();
            break;
        }
    }
    return 0;
}

//----------------------------------------------------------------