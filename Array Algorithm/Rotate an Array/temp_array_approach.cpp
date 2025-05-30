#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int r){
    int size = arr.size();
    vector<int> temp(size);

    r = (r>size)? (r%size): r;

    int j=0;


    for(int i=r; i<size; i++){
        temp[j++] = arr[i]; 
    }

    for(int i=0; i<r; i++){
        temp[j++] = arr[i];
    }

    return temp;
}

int main(){
   vector<int> arr = { 1, 2, 3, 4, 5, 6};
   int rotateAmount;
   cin >> rotateAmount;

   arr = rotateArray(arr, rotateAmount);

   for(int i: arr){
    cout << i << "  ";
   }
   
    return 0;
}