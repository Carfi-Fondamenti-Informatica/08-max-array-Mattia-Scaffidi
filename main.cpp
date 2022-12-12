#include <iostream>
using namespace std;
#include "lib.h"

int main(){
    int dim;
    float num[dim];
    cin>>dim;
    for (int i=0;i< dim;i++){
        cin>> num[i];
    }
    cout<< funzione(num, dim);

    return 0;
}

