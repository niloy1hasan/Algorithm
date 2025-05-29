#include <iostream>
using namespace std;
int main(){
    int arr[] = {67, 21, 84, 12, 39, 58, 7, 90, 16, 49, 75, 2, 31, 96, 44, 28, 63, 18, 85, 6, 55, 35, 99};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left = 0, right = size-1;

    while(left<right){
        swap(arr[left++], arr[right--]);
    }


    for(int i=0; i<size; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}