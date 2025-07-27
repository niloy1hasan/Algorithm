#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
hash set approach used two loops, so time complexity is O(n^2)
*/

void checkTripletSum(vector<int>& arr, int target){
    int size = arr.size();
     
    for(int i=0; i<size-2; i++){
        unordered_set<int> set;

        for(int j=i+1; j<size; j++){
            int second = target - arr[i] - arr[j];
            if(set.find(second)!=set.end()){
                cout << "found\n";
                return;
            }

            set.insert(arr[j]);
        }
    }

    cout << "not found\n";
    return;
}

int main(){
    vector<int> num1 = {1, 4, 45, 6, 10, 8};
    vector<int> num2 = {1, 2, 4, 3, 6, 7, 9};
    vector<int> num3 = {40, 20, 10, 3, 6, 7};

    checkTripletSum(num1, 13);
    checkTripletSum(num2, 10);
    checkTripletSum(num3, 24);


    return 0;
}