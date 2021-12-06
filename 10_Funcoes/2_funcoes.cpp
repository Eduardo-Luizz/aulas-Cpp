#include <iostream>
#include <stdlib.h>

using namespace std;

/*Protótipos das funções criadas*/

int soma(int x, int y); // Aqui eu chamei o prototipo da funcao pra iniciar antes de qualquer coisa isso e boa pratica

/*Desenvolvimento dos codigos*/

int main (){

    system(" cls ");
    
    int a = 50;
    int b = 20;
    cout << endl << soma(a, b) << endl;
    cout << soma(2, soma(a, b)) << endl;// Aqui eu somei 2 a soma de a e b
    
    return 0;
}

int soma(int x, int y){ // Aqui eu declarei a funcao esta e a boa pratica
    int resultado;
    resultado = x + y;
    return resultado; // Funçoes pordem ou não retornar algo
}
