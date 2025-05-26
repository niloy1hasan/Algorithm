#include <iostream>
using namespace std;

void getSuffix(int suffix[], const int arr[], int size){
    if(size<=0) return;

    suffix[size-1] = arr[size-1];
    
    for(int i=size-2; i>=0; i--){
        suffix[i] = arr[i] + suffix[i+1]; 
    }
} 

int main(){
    int arr[] = {73, 5, 92, 48, 16, 34, 87, 29, 61, 10, 77, 3, 66, 25, 54};
    int size = sizeof(arr)/sizeof(arr[0]);

    int suffixSum[size];
    getSuffix(suffixSum, arr, size);

    for(int i=0; i<size; i++){
        cout << suffixSum[i] << " ";
    }

    return 0;
}