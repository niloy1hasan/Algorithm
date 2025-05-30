#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int rotateAmount;
    cin >> rotateAmount;

    rotateAmount = (rotateAmount >=(int)arr.size())? rotateAmount%arr.size(): rotateAmount;
    reverse(arr.begin(), arr.begin() + rotateAmount);
    reverse(arr.begin() + rotateAmount, arr.end());
    reverse(arr.begin(), arr.end());

    for(int i:arr){
        cout << i << "  ";
    }

    return 0;
}