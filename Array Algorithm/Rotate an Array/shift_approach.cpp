#include <iostream>
#include <vector>
using namespace std;

void shift(vector<int> & arr){
    int temp = arr[0];
    for(int i=0; i<arr.size()-1; i++){
        arr[i] = arr[i+1];
    }

    arr[arr.size()-1] = temp;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int rotateTime;
    cin >> rotateTime;

    while(rotateTime--){
        shift(arr);
    }

    for(int i:arr){
        cout << i << "  ";
    }



    return 0;
}