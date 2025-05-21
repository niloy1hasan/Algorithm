#include <iostream>
using namespace std;
int main(){
    int arr[] = {327, 5, 198, 244, 118, 349, 460, 9, 376, 281, 144, 433, 73, 87, 256, 401, 336, 230, 159, 5, 42, 296, 58, 212, 268, 184, 125, 463, 303, 215, 378, 95, 171, 66, 219, 449, 111, 38, 262, 106, 201, 13, 186, 429, 222, 483, 139, 30, 344, 320, 104};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++){
        int minIndex = i;

        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }


        int minValue = arr[minIndex];


        for(int k= minIndex; k>i; k--){
            arr[k] = arr[k-1];
        }

        arr[i] = minValue;
    }


    for(int i:arr){
        cout << i << " "; 
    }

    return 0;
}