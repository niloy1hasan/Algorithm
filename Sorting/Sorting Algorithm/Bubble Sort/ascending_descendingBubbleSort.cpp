#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n\n";
}

void ascendingBubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }
}

void descendingBubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = { 158, 394, 417, 114, 739, 357, 679, 564, 778, 731, 395, 718, 218, 320, 600,
        218, 330, 58, 266, 437, 159, 695, 418, 443, 340, 138, 263, 141, 313, 137, 291, 623,
         708, 463, 662, 622, 152, 2, 774, 473, 490, 341, 211, 56, 47, 777, 130, 553, 772,
          407, 168, 320, 520, 212, 64, 590, 183, 330, 515, 506, 406, 788, 172, 523, 699,
           99, 465, 422, 658, 465, 205, 667, 542, 286, 671, 102, 23, 48, 470, 256, 532,
            484, 185, 144, 131, 517, 162, 180, 224, 467, 329, 339, 764, 789, 488, 395,
             214, 514, 435, 676};

    int size = sizeof(arr)/sizeof(arr[0]);

    ascendingBubbleSort(arr, size);
    printArray(arr, size);
    descendingBubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}