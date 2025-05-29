#include <iostream>
using namespace std;

void reverseArray(int arr[], int left, int right){
    if(left>=right)return;

    swap(arr[left], arr[right]);
    reverseArray(arr, left+1, right-1);
}

int main(){
    int arr[] ={86, 34, 20, 5, 71, 43, 93, 11, 98, 30, 6, 56, 15, 68, 23, 37, 62, 80, 25, 48, 87, 41, 76};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr, 0, size-1);

    for(int i:arr){
        cout << i << "  ";
    }
    

    return 0;
}