#include <iostream>
#include <vector>
using namespace std;

void counting_sort(vector<int> &arr){
    int size = arr.size();

    int highest = arr[0];

    for(int i=1; i<size; i++) if(highest<arr[i]) highest = arr[i];

    vector<int> count(highest+1, 0);

    for(int i:arr){
        count[i]++;
    }

    int index = 0;

    for(int i=0; i<=highest; i++){
        while(count[i]>0){
            arr[index++] = i;
            count[i]--;
        }
    }

}

int main(){
    /* 
    counting sort is a type of sorting algorithm,
    which algorithm sorting value by storing their frequency in order
    
    counting sort algorithm mechanism is different from any other sorting algorithm
    it works on non negative integer data and highest value of data is less than number of value

    */

    vector<int> arr = {4, 7, 2, 4, 9, 3, 1, 8, 6, 5, 4, 7, 3, 2, 6, 0, 5, 8, 3, 7};
    counting_sort(arr);

    for(int i:arr){
        cout << i << "  ";
    }

    return 0;
}