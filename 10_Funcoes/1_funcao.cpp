#include <iostream>
#include <stdlib.h>

using namespace std;

/*Protótipos das funções criadas*/

int soma(int x, int y);
string mostrar();
void vazia(string label, double valor);

/*Desenvolvimento dos codigos*/

int main (){

    system(" cls ");
    
    int x = 8;
    int y = 20;
    cout << mostrar() << endl << soma(x, y) << endl;
    vazia("Preco de venda" , x );
    return 0;
}

int soma(int x, int y){
    int resultado;
    resultado = x + y;
    return resultado; // Funçoes pordem ou não retornar algo
}

string mostrar(){
    return "oi";
}

void vazia(string label, double valor){ // Void e quando uma funcao nao devolve um valor de retorno
    cout << label << ".....R$ " << valor << endl;
}