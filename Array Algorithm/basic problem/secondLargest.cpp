#include <iostream>
using namespace std;
int main(){
    int arr[] = {27, 93, 14, 68, 39, 82, 5, 47, 61, 12, 36, 78, 20, 55, 99, 41, 24, 86, 33, 9,  65, 74, 18, 90, 3, 50, 70, 29, 7, 81, 13, 95, 44, 16, 62, 31, 26, 58, 76, 38};
    int size = sizeof(arr)/sizeof(arr[0]);

    int largest = arr[0];
    int second = INT32_MIN;
    
    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
            
        }

        if(arr[i]<largest && arr[i]>second){
            second = arr[i];
        }
    }


    cout << second << endl;





    return 0;
}