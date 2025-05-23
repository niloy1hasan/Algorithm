#include <iostream>
using namespace std;

int large(int arr[], int size, int position, int largeNumber){
    if(size>position){
       return large(arr, size, position+1, max(largeNumber, arr[position]));
    } else {
    return largeNumber;
    }

}

int main(){
    int arr[] = {42, 17, 83, 9, 64, 28, 91, 36, 57, 3, 75, 14, 89, 22, 60, 6, 47, 99, 32, 71, 12, 8, 50, 95, 27, 39, 19, 66, 85, 73};

    int largest = INT32_MIN;
    for(int i: arr){
        if(largest<i) largest = i;
    }

    cout << largest << endl;


    int size = sizeof(arr)/sizeof(arr[0]);

    //recursive approach
    cout << large(arr, size, 0, INT32_MIN);

    return 0;
}