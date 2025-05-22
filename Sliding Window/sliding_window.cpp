#include <iostream>
using namespace std;

int maxSum(int arr[], int size, int k){
    if(size<=k){
        return -1;
    }

    int sum = 0;

    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    int maximum = sum;
    for(int i=k; i<size; i++){
        sum += arr[i] - arr[i-k];
        maximum = max(maximum, sum);
    }

    return maximum;
}

int main(){
    int arr[] = {87, 12, 45, 63, 29, 5, 94, 38, 71, 56, 8, 77, 21, 66, 34, 50, 3, 90, 18, 42};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    cout << maxSum(arr, size, k);




    return 0;
}