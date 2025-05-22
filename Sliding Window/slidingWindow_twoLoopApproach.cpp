#include <iostream>
using namespace std;

int maxSum(int arr[], int size, int k){
    int max = INT8_MIN;

    for(int i=0; i<size-k+1; i++){
        int sum = 0;

        for(int j=0; j<k; j++){
            sum += arr[i+j];
        }

        if(max<sum){
            max = sum;
        }
    }

    return max;
}

int main(){
    int arr[] = {87, 12, 45, 63, 29, 5, 94, 38, 71, 56, 8, 77, 21, 66, 34, 50, 3, 90, 18, 42};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    cout << maxSum(arr, size, k);


    return 0;
}