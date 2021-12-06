
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>  
using namespace std;

struct Registro {
    string nome;
    double altura;
    double peso;
    struct Registro *eloA;
    struct Registro *eloP;
};

Registro* gerarRegistro(
    string nome, 
    double altura, 
    double peso
);

char menu();
void excluir();
void inserir();
void mostrarCrescente();
void mostrarDecrescente();

Registro *cabeca = NULL, *cauda = NULL;

int main() {
    do {
        system("CLS");
        switch (menu())
        {
            case '1':
                inserir();
                system("PAUSE");
                break;
            case '2':   
                excluir();
                break;
            case '3':   
                mostrarCrescente();
                break;
            case '4':   
                mostrarDecrescente();
                break;
            case '0': 
                return 0;
            default: 
                cout << "Nao existe esta opcao!" << endl;
                system("PAUSE");
        }
    } while (true);
}

Registro* gerarRegistro(
    string nome, 
    double altura, 
    double peso
) {
    Registro *novoRegistro;
    novoRegistro = new Registro();
    novoRegistro -> nome = nome;
    novoRegistro -> altura = altura;
    novoRegistro -> peso = peso;
    novoRegistro -> eloP = NULL;
    novoRegistro -> eloA = NULL;
    return novoRegistro;
}

char menu() {
    char usuarioDigitou;
    cout << endl;
    cout << "____________Lista Duplamente Encadeada com alocacao dinamica____________" << endl << endl;
    cout << "Digite sua escolha:" <<endl;
    cout << "1 - Incluir um registro na lista" << endl;
    cout << "2 - Excluir um registro da lista" << endl;
    cout << "3 - Mostrar a lista em ordem crescente" << endl;
    cout << "4 - Mostrar a lista em ordem decrescente" << endl;
    cout << "0 - Encerrar o programa" << endl;
    cin >> usuarioDigitou;
    return usuarioDigitou;
}

void inserir() {
    string nome;
    double altura;
    double peso;
    cout << "Digite o Nome: ";
    cin >> nome;
    cout << "Digite a Altura: ";
    cin >> altura;
    cout << "Digite o Peso: ";
    cin >> peso;
    Registro *novoRegistro = gerarRegistro(
        nome,
        altura,
        peso
    );
    if (cabeca == NULL) {
        cabeca = novoRegistro;
        cauda = novoRegistro;
        cabeca -> eloA = NULL;
        return;
    }
    if ((novoRegistro -> nome) < (cabeca -> nome)) {
        novoRegistro -> eloA = NULL;
        cabeca -> eloA = novoRegistro;
        novoRegistro -> eloP = cabeca;
        cabeca = novoRegistro;
        return;
    }
    if ((novoRegistro -> nome) > (cauda -> nome)) {
        novoRegistro -> eloA = cauda;
        cauda -> eloP = novoRegistro;
        cauda = novoRegistro;
        return;
    }
    Registro *temp = cabeca -> eloP;
    while ((temp -> nome) < (novoRegistro -> nome)) {
        temp = temp -> eloP;
    }
    (temp -> eloA) -> eloP = novoRegistro;
    novoRegistro -> eloA = temp -> eloA;
    temp -> eloA = novoRegistro;
    novoRegistro -> eloP = temp;
}

void excluir() {
    if (cabeca == NULL) {
        cout << "Lista vazia!" << endl;
    } else {
        string usuarioDigitou;
        cout << "Digite o nome a ser removido: ";
        cin >> usuarioDigitou;
        int indexRegistro = 0, achouUsuario = 0;
        Registro *lista;
        lista = cabeca;
        Registro *temp = new Registro();
        while (1) {
            if (lista -> nome == usuarioDigitou) {
                achouUsuario = 1;
                temp = lista;
                break;
            }
            if (lista == cauda) {
                break;
            }
            indexRegistro++;
            lista = lista -> eloP;
        }
        if (achouUsuario == 1) {
            if (indexRegistro == 0) {
                if (cabeca -> eloP == NULL) {
                    cabeca = NULL;
                    cauda = NULL;
                } else {
                    cabeca = cabeca -> eloP;
                    cabeca -> eloA = NULL;
                }
            } else {
                Registro *temp2 = new Registro();
                temp2 = temp -> eloA;
                temp2 -> eloP = temp -> eloP;
                if (temp -> eloP == NULL) {
                    cauda = temp2;
                } else {
                    temp -> eloP -> eloA = temp2;
                }
                free(temp);
            }   
            cout << "Usuario deletado!" << endl;      
        } else {
            cout << "Usuario nao existe!" << endl;
        }
    }
    system("PAUSE");
}

void mostrarCrescente() {
    Registro *lista;
    lista = cabeca;
    while (1) {
        if (cabeca == NULL || cauda == NULL) {
            cout << "Lista vazia!" << endl;
            break;
        }
        cout << "[" << lista -> nome << ", " << lista -> altura << ", " << lista -> peso << "]" << endl;
        if (lista == cauda) {
            break;
        }
        lista = lista -> eloP;
    }
    system("PAUSE");
}

void mostrarDecrescente() {
    Registro *lista;
    lista = cauda;
    while (1) {
        if (cabeca == NULL || cauda == NULL) {
            cout << "Lista vazia!" << endl;
            break;
        }
        cout << "[" << lista -> nome << ", " << lista -> altura << ", " << lista -> peso << "]" << endl;
        if (lista -> eloA == NULL) {
            break;
        }
        lista = lista -> eloA;
    }
    system("PAUSE");
}         