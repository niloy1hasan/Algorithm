#include <iostream>
using namespace std;

void getPrefixXOR(int prefix[], int arr[], int size){
    if(size<=0) return;
    prefix[0] = arr[0];

    for(int i=1; i<size; i++){
        prefix[i] = arr[i] ^ prefix[i-1];
    }
}

int main(){
    int arr[] = {47, 3, 89, 76, 15, 62, 28, 91, 53, 6, 39, 84, 22, 10, 70, 35, 96, 18, 57, 44};
    int size = sizeof(arr)/sizeof(arr[0]);
    int prefixXor[size] = {0};
    getPrefixXOR(prefixXor, arr, size);

    for(int i: prefixXor){
        cout << i << " ";
    }

    cout << "\n\n";

    cout << "find xor of a range from the array\n";
    int left, right;
    cout << "left range: ";
    cin >> left;
    cout << "right range: ";
    cin >> right;

    cout << (prefixXor[right-1] ^ ((left>1)? prefixXor[left-2]: 0));


    return 0;
}