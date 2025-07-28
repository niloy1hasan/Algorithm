#include <iostream>
#include <vector>
using namespace std;


/*
Radix sort is a special type of sorting algorithm,
and its sorting process is totally different than many other sorting algorithms.

Whereas most sorting algorithms compare the values and sort them,
Radix sort does not compare values; it compares the digits of the values.

Radix sort works best when the dataset holds only positive numbers.

For example: 
    array = 381 238 208

    Other sorts compare values directly:
     208 < 238 < 381
    
    Radix sort:
    Takes the least significant digit and compares:
    
    First iteration (1's place):
     208 => 8
     238 => 8
     381 => 1

     After first iteration:
     381 208 238
     
    Second iteration (10's place):
     381 => 8
     208 => 0
     238 => 3

     After second iteration:
     208 238 381
     
    Third iteration (100's place):
     208 => 2
     238 => 2
     381 => 3

     After third iteration:
     208 < 238 < 381

Steps of Radix Sort:
 1. Find the maximum value in the dataset.
 2. Take a 2D array with size 10 to store values based on their digit (0–9).
 3. Run a loop that continues as long as (max / exp > 0) — where exp is digit place (1, 10, 100...).
    Inside the loop:
        4. Loop through the dataset to get digits step-by-step from each value.
        5. Store the values in the 2D array based on the current digit.
        6. After storing, traverse the 2D array from start to end and overwrite the original array in order.
    Do this until the maximum digit place is covered.

After all that, you'll get the sorted array using Radix Sort.
*/


void radixSort(vector<int>& arr, int size){
    int maxValue = arr[0];
    for(int i=1; i<size; i++) 
        if(arr[i]>maxValue) maxValue = arr[i];
    
    vector<vector<int>> radixArr(10);
    int exp = 1;

    while(maxValue/exp > 0 ){
        for(int i=0; i<size; i++){
            int index =  (arr[i]/exp) % 10;
            radixArr[index].push_back(arr[i]);
        }

    int pos = 0;

    for(int i=0; i<10; i++){
        for(int j=0; j<radixArr[i].size(); j++){
            arr[pos++] = radixArr[i][j];
        }
    }

    exp *= 10;

    for(int i=0; i<10; i++) radixArr[i].clear();
    }
}

void printArray(const vector<int>& arr, int size, string message){
    cout << message << ":\n";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    int size = arr.size();

    printArray(arr, size, "Original Array");

    radixSort(arr, size);

    printArray(arr, size, "Sorted Array");
    return 0;
}