#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    void checkTripletSum(vector<int>& arr, int target){
        int size = arr.size();

        sort(arr.begin(), arr.end());

        for(int i=0; i<size-2; i++){
            int l = i+1;
            int r = size-1;

            int t = target - arr[i];

            while(l<r){
                if(arr[l]+arr[r]==t){
                    cout << "found\n";
                    return;
                } else if(arr[l]+arr[r]<t){
                    l++;
                } else {
                    r--;
                }
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