#include <iostream>
#define TAM 5 // Define a constante que aonde aparecer a palavra TAM o valor é 20 // Diretiva para o compilador
using namespace std;

int main(){
    
    /*A única diferença entre essas tres variaveis que eu criri é o nome a maneira como o computador interpreta e exatamente igual*/

    //int linha [10]; estou criando uma array com 10 posições
    //int coluna [10]; estou criando uma array com 10 posições
    //int vetor [10]; estou criando uma array com 10 posições 
    
    /*Declarei que na posicao 0 da array linha a posicao 0 deve receber o valor 5*/

    //linha[0] = 5; 
    //linha[1] = 3;


    int linha[TAM]={4,7,9,-10,4}; // Defini os valore na criacao da variavel
    int coluna[TAM];
    int vetor[TAM];

    /*Para a ideia de matriz preciso de duas dimensoes um exemplo seria cinco linhas e tres colunas ou vice versa*/
    int matriz [5][3]={{1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}}; /* Aqui eu tenho tres valores para as tres colunas ou linhas e cinco linhas 
    ou colunas*/
    /*Atribuindo valores para uma matriz. Sen que seja atribuido na própria criação*/
    /*matriz[0][0] = 2;
      matriz[3][2] = -7
    */

    /*Atribuindo valores para um elemento 3D. Sen que seja atribuido na própria criação*/
    int elemento3d[5][8][25];
    /*elemento3d[0][0][0] = 2;
      elemento3d[3][2][2] = -7*/
     
    int i;

    matriz[0][0] = 2; //Atribui valores para a linha 0 coluna 0
    matriz[3][2] = -7;


    for(i = 0;i < TAM; i++){
        cout << coluna[i] << endl;
    }

    cout << sizeof(linha); // mostra o tamanho, 5 elementos 5x4 = 20
}