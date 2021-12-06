#include <iostream>
#include <stdlib.h>
#define TAM 20

using namespace std;

int main (){

    system(" cls ");
    
    int arr[TAM];
    int maior = 0;
    int menor = 2147483647;


    for(int i = 0; i < TAM; i++) {
        
        cout << "Digite o " << i << " valor : " << endl;
        cin >> arr[i];

        if((arr[i] <= 0) || (arr[i] == -i)){
            i-=1;
            cout << "valores nulos nao sao aceitos, digite um numero inteiro : " << endl;
            cin >> arr[i];

        } else { 
        if(arr[i] >= maior) maior = arr[i]; 
        if(arr[i] <= menor) menor = arr[i];
        }
    }

    cout << "MAIOR : " << maior << endl;
    cout << "MENOR : " << menor << endl;
}