#include <iostream>
#include <vector>
using namespace std;

vector<int> getPrefixXor(vector<int> arr){
    vector<int> prefix(arr.size());
    if(arr.empty()) return prefix;

    prefix[0] = arr[0];
    for(unsigned int i=1; i<arr.size(); i++){
        prefix[i] = arr[i] ^ prefix[i-1];
    }

    return prefix;
}


int main(){
    vector<int> arr = {47, 3, 89, 76, 15, 62, 28, 91, 53, 6, 39, 84, 22, 10, 70, 35, 96, 18, 57, 44};
    vector<int> prefixXor = getPrefixXor(arr);

    for(int i: prefixXor){
        cout << i << " ";
    }

    cout << "\n\n";

    cout << "find xor of a range from the array\n";
    int left, right;
    cout << "left range: ";
    cin >> left;
    cout << "right range: ";
    cin >> right;

    cout << (prefixXor[right-1] ^ ((left>1)? prefixXor[left-2]: 0));

    return 0;
}