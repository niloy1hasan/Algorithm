#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> arr = {65, 17, 94, 3, 52, 33, 82, 28, 69, 40, 77, 12, 58, 35, 99, 9, 73, 18, 45, 26, 88, 60, 7};

    reverse(arr.begin(), arr.end());
    
    for(int i:arr){
        cout << i << "  ";
    }


    return 0;
}