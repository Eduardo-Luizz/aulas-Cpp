#include <iostream>
#include <stdlib.h>
#define TAM 10

using namespace std;

int main (){

    //system(" cls ");
    
    int X[TAM] = {0,0,0,-1,-4,-5,-6,7,88,1};

    for(int i = 0; i < 10; i++) {
        
        if(X[i] == 0){
            X[i] = 1;
        } else if(X[i] < -X[i]) {
            X[i] = 1;
        }
        
        cout << "X" << "[" << i << "]" << " = " << X[i] << endl;
    }

    cout << endl;
    return 0;
}