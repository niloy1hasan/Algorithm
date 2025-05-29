#include <iostream>
using namespace std;
int main(){
    int arr[] = {42, 8, 91, 36, 13, 59, 24, 78, 1, 50, 66, 27, 89, 32, 10, 60, 17, 97, 46, 22, 79, 4, 74};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size-1-i]);
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}