#include <iostream>
#include <string> //Para conseguir usar string

using namespace std;

int main()
{
    //armazenar nome, idade, altura, sexo, aprovado(S/N)
    
    //Criei as variáveis
    
    string name;  //Poderia criar com valor fixo EX: string name = "Eduardo";
    
    unsigned int age; //unsigned int é para valores apenas positivos
    
    float height;
    
    char sex; //Assim ele mostra apenas o primeiro caractere
    
    bool aprovado;

    //Começei chamando um cin (valor de entrada) e uma frase para o usuário digitar
    
    cout << "Digite o name: "; // Quando eu digito Eduardo Luiz Zanotto até o primeiro espaço ele atribui para a variavel nome e terminou o programa
    //cin.ignore( ); //limpa o buffer de teclado
    getline(cin, name); // pode ler dados com espaço em branco

    cout << "Digite a age: ";
    cin >> age;

    cout << "Digite a height: ";
    cin >> height;

    cout << "Digite o sex : ";
    cin >> sex;

    cout << " O aluno " << name << " de idade " << age << ", tem altura " << height << " e sexo " << sex << endl;

    return 0;
}