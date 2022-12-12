#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int D;
    float num[D];
    cin>>D;
    for (int i=0;i< D;i++){
        cin>> num[i];
    }
    cout<< funzione(num, D);

    return 0;
}
