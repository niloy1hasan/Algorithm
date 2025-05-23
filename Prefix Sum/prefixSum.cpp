#include <iostream>
using namespace std;

void getPrefixSum(int prefix[], int arr[], int size){
    prefix[0] = arr[0];
    for(int i=1; i<size; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
}

int main(){
    int arr[] = {83, 27, 56, 4, 99, 14, 62, 35, 78, 11,23, 67, 91, 38, 5, 72, 60, 19, 45, 84,3, 33, 74, 26, 98, 40, 8, 50, 88, 13};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int prefixSum[size] = {0};

    getPrefixSum(prefixSum, arr, size);

    for(int i=0; i<size; i++){
        cout << prefixSum[i] << " ";
    }

    cout << "\n\n";

    cout << "find the sum of numbers from a range:\n";
    int left, right;
    cout << "range left: ";
    cin >> left;
    cout << "Range right: ";
    cin >> right;


    if(left>1){
        cout << prefixSum[right-1] - prefixSum[left - 2];
    } else {
        cout << prefixSum[right-1];
    }
    


    return 0;
}