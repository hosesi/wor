#include <iostream>
using namespace std;
int jamarr(int arr[], int n){
    int jam= 0;
    for(int i = 0; i< n; i++){
        jam+= arr[i];
    }
    return jam;
}