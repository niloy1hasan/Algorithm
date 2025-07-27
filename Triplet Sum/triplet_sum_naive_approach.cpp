#include <iostream>
#include <vector>
using namespace std;

/*
in this approach use three for loop
so, time complexity is O(n^3)
*/

void checkTripletSum(vector<int> arr, int target){

    int size = arr.size();

    for(int i=0; i<size-2; i++){
        for(int j=i+1; j<size-1;j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout << "found\n";
                    return;
                }
            }
        }
    }

    cout << "not found\n";
}

int main(){
    vector<int> num1 = {1, 4, 45, 6, 10, 8};
    vector<int> num2 = {1, 2, 4, 3, 6, 7};
    vector<int> num3 = {40, 20, 10, 3, 6, 7};

    checkTripletSum(num1, 13);
    checkTripletSum(num2, 10);
    checkTripletSum(num3, 24);

    return 0;
}