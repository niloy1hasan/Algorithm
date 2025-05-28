#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> arr = {0, 4, 12, 0, 7, 0, 19, 23, 0, 8, 0, 0, 31, 2, 0, 9, 16, 0, 22, 6, 0, 18, 0, 11, 0};
    int count = 0;

    for(unsigned i=0; i<arr.size(); i++){

        if(arr[i]!=0) arr[count++] = arr[i];
    }

    for(unsigned i=count; i<arr.size(); i++) arr[i] = 0;

    for(unsigned i=0; i<arr.size(); i++) cout << arr[i] << "  ";
    
    return 0;
}