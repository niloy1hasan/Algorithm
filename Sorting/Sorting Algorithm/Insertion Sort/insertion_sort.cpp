#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr){
    int size = arr.size();
    
    for(int i=1; i<size; i++){
    int index = i;
    int currentValue = arr[i];
    int j= i-1;

    while(j>=0 && arr[j]>currentValue){
        arr[j + 1] = arr[j];
        index = j;
        j--;
    }
    
    arr[index] = currentValue;
    }

}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 5};
    insertionSort(arr);

    for(int i:arr){
        cout << i << " ";
    }

    return 0;
}