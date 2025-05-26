#include <iostream>
#include <vector>
using namespace std;

void getSuffixSum(vector<int> arr, vector<int> &suffix){
    int size = arr.size();
    if(size<=0) return;
    
    suffix[size-1] = arr[size-1];

    for(int i=size-2; i>=0; i--){
        suffix[i] = arr[i] + suffix[i+1];
    }
}


int main(){
    vector<int> arr = {73, 5, 92, 48, 16, 34, 87, 29, 61, 10, 77, 3, 66, 25, 54};
    vector<int> suffixSum(arr.size(), 0);

    getSuffixSum(arr, suffixSum);

    for(int i=0; i<suffixSum.size(); i++){
        cout << suffixSum[i] << " ";
    }

    return 0;
}