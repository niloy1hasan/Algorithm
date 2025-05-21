#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1], right[n2];

    for(i=0; i<n1; i++){
        left[i] = arr[start+i];
    }

    for(j=0; j<n2; j++){
        right[j] = arr[mid + 1 + j];
    }


    i = 0;
    j = 0;
    k = start;


    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while(i<n1){
        arr[k++] = left[i++];
    }

    while(j<n2){
        arr[k++] = right[j++];
    }

}

void mergeSort(int arr[], int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}



int main(){
    //int arr[] = {47, 3, 89, 12, 65, 28, 71, 19, 94, 33, 6, 52, 77, 84, 10, 25, 58, 40, 36, 61};
    int arr[] = {3, 12, 8, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size-1);

    for(int i: arr){
        cout << i << " ";
    }

    return 0;
}