#include <iostream>
#define TAM 5
#include <string>
using namespace std;

struct automovel
{   
    string marca;
    string modelo;
    double valor;
    int freq = 0;
};

int buscaMod(automovel vet[], string modelo)
{
    for(int i = 0; i < TAM; i++) if(vet[i].modelo == modelo) return i;
    return -1;
}

void ordemDaStruct(automovel vet[]) {
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(vet[i].freq > vet[j].freq)
            {
                automovel cal = vet[i];
                vet[i] = vet[j];
                vet[j] = cal;
            }
        }
    }
}

struct automovel vet[TAM];


int main() {

    for(int i = 0; i < TAM; i++) {
        cout << "Digite a marca " <<  i + 1 << " : ";
        cin >> vet[i].marca;

        cout << "Digite o modelo " <<  i + 1 << " : ";
        cin >> vet[i].modelo;

        cout << "Digite o valor " <<  i + 1 << " : ";
        cin >> vet[i].valor;
        cout << endl;
    }

    while(true) {
        string modelo;

        cout << "Digite o modelo do veiculo : ";
        cin >> modelo;

        if (modelo == "FIM")break;
        int modI = buscaMod(vet, modelo);
        if(modI == -1) cout << "veiculo nao foi encontrado" << endl;
        else{
            cout << "veiculo " << modI << "endl";
            cout << "marca " << vet[modI].marca << endl;
            cout << "valor " << vet[modI].valor << endl;
            cout << endl;
            vet[modI].freq += 1;
            ordemDaStruct(vet);
        }
        for (int i=0; i<TAM; i++) cout << "Carro " << i + 1 << " = [" << vet[i].marca << ", " <<vet[i].valor << ", " <<vet[i].freq << ", " <<vet[i].modelo << "]" << endl;
    }
}
