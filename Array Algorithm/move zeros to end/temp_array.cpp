#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {0, 5, 13, 0, 42, 0, 7, 0, 19, 23, 0, 8, 0, 0, 31, 2, 0, 9, 16, 0, 22};
    vector<int> temp;

    for(unsigned int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(unsigned int i=temp.size(); i<arr.size(); i++){
        temp.push_back(0);
    }

    for(unsigned i=0; i<temp.size(); i++){
        cout << temp[i] << "  ";
    }

    return 0;
}