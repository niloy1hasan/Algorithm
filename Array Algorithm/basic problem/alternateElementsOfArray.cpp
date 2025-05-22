#include <iostream>
using namespace std;

void printAlternate(int arr[], int size, int position){
    if(position>=size){
        return;
    }
    
    cout << arr[position] << " ";
    printAlternate(arr, size, position+2);
}

int main(){
    int arr[] = {37, 82, 14, 56, 99, 23, 68, 11, 47, 91, 5, 76, 34, 62, 88, 29, 45, 7, 53, 18};
    int size = sizeof(arr)/sizeof(arr[0]);

    //iterative approach
    for(int i=0; i<size; i+=2){
        cout << arr[i] << " ";
    }

    cout << endl;

    //recursive approach
    printAlternate(arr, size, 0);

    return 0;
}