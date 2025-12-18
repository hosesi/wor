#include <iostream>
using namespace std;
int tafrigharr(int arr[], int n){
    int tafrigh = arr[0];
    for (int i = 1; i< n; i++){
        tafrigh -= arr[i];
    }
    return tafrigh;
}