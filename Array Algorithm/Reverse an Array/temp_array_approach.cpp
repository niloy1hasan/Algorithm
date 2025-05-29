#include <iostream>
using namespace std;
int main(){

    int arr[] = {73, 5, 92, 38, 61, 47, 14, 88, 26, 3, 57, 19, 81, 33, 64, 9, 45, 70, 29, 95, 11, 53, 40};
    int size = sizeof(arr)/sizeof(arr[0]);

    int temp[size];

    for(int i=0; i<size; i++){
        temp[i] = arr[size-1-i];
    }


    for(int i=0; i<size; i++){
        cout << temp[i] << "  ";
    }

    return 0;
}