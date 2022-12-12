#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int dim;
    int num[dim];
    
    cin>>dim;
    for (int i=0;i< dim;i++){
        cin>> num[i];
    }
    cout<< funzione(num, dim);

    return 0;
}

