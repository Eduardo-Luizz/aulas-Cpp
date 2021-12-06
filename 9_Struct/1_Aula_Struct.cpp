#include <iostream>
using namespace std;
#include <string>

struct data
{
    unsigned short int dia;
    unsigned short int mes;
    unsigned short int ano;
};

struct pessoa 
{
    string nome;
    unsigned int altura;
    float peso;
    struct data datanasc; // Coloquei uma struct dentro de outra
    double nota[3];
};

struct pessoa aluno[2]; // Posso ter mais q um
struct pessoa professor;


int main(){
    aluno[0].nome = "Eduardo Luiz";
    aluno[0].altura = 177;
    aluno[0].peso = 72.5;
    aluno[0].nota[0] = 10;
    aluno[0].nota[1] = 10;
    aluno[0].nota[2] = 10;
    aluno[0].datanasc.dia = 01;
    aluno[0].datanasc.mes = 12;
    aluno[0].datanasc.ano = 2021;

    aluno[1].nome = "Camile";
    aluno[1].altura = 160;
    aluno[1].peso = 73;
    aluno[1].nota[0] = 10;
    aluno[1].nota[1] = 9;
    aluno[1].nota[2] = 8;
    aluno[1].datanasc.dia = 20;
    aluno[1].datanasc.mes = 12;
    aluno[1].datanasc.ano = 2021;

    cout << endl << "o nome do aluno 1 e : " << aluno[0].nome << endl;
    cout << "a altura do aluno 1 e : " << aluno[0].altura << endl;
    cout << "o peso do aluno 1 e : " << aluno[0].peso << endl;
    cout << "o aluno fez tre provas tendo as notas : " << aluno[0].nota[0] << " / " <<  aluno[0].nota[1] << " / " << aluno[0].nota[2] << endl;
    cout << "o dia de nascimento " << aluno[0].datanasc.dia << "/" << aluno[0].datanasc.mes << "/" << aluno[0].datanasc.ano << endl << endl;

    cout << "o nome do aluno 2 e : " << aluno[1].nome << endl;
    cout << "a altura do aluno 2 e : " << aluno[1].altura << endl;
    cout << "o peso do aluno 2 e : " << aluno[1].peso << endl;
    cout << "o aluno fez tre provas tendo as notas : " << aluno[1].nota[0] << " / " <<  aluno[1].nota[1] << " / " << aluno[1].nota[2] << endl;
    cout << "o dia de nascimento " << aluno[1].datanasc.dia << "/" << aluno[1].datanasc.mes << "/" << aluno[1].datanasc.ano << endl << endl;
}