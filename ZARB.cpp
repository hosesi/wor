#include <iostream>
using namespace std;
int zarbarr(int arr[] , int n){
    int zarb = 1;
    for(int i = 0; i< n; i++){
        zarb*= arr[i];
    }
    return zarb;
}