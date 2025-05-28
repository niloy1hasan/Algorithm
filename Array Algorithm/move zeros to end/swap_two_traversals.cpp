#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {0, 3, 7, 0, 15, 0, 9, 22, 0, 5, 0, 13, 27, 0, 8, 0, 0, 19, 2, 0, 11, 0, 6, 0, 18, 25, 0, 12, 0, 20};
    int count = 0;

    for(unsigned i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count++]);
        }
    }

    for(unsigned i=0; i<arr.size(); i++){
        cout << arr[i] << "  ";
    }



    return 0;
}