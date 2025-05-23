#include <iostream>
#include <vector>
using namespace std;

vector<int> getPrefixSum(vector<int> arr){
    int size = arr.size();
    vector<int> prefixSum(size);
    if(size<=0){
        return prefixSum;
    }

    prefixSum[0] = arr[0];

    for(int i=1; i<size; i++){
        prefixSum[i] = arr[i] + prefixSum[i-1];
    }

    return prefixSum;
}

int main(){
    vector<int> arr = {83, 27, 56, 4, 99, 14, 62, 35, 78, 11,23, 67, 91, 38, 5, 72, 60, 19, 45, 84,3, 33, 74, 26, 98, 40, 8, 50, 88, 13};
    
    vector<int> prefixSum = getPrefixSum(arr);

    for(int i: prefixSum){
        cout << i << " ";
    }

    cout << "\n\n";

    cout << "find sum of number from a range: \n\n";
    int left, right;
    cout << "left range: ";
    cin >> left;
    cout << "right range: ";
    cin >> right;

    cout << prefixSum[right-1] + ((left>1)? prefixSum[left-2]:0); 

    return 0;
}