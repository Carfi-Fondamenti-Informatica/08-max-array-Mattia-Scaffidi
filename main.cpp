#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int dim;
    float num[dim];
    
    cin>>dim>>endl;
    for (int i=0;i< dim;i++){
        cin>> num[i];
    }
    cout<< funzione(num, dim)<<endl;

    return 0;
}

