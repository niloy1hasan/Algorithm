#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> getIntersection(vector<int> arr1, vector<int> arr2){
    
    set<int> intersection;

    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                if(intersection.find(arr1[i])!=intersection.end())
                intersection.insert(arr1[i]);
            }
        }
    }
    

}

int main(){
    vector<int> arr1 = {1, 2, 3, 2, 1};
    vector<int> arr2 = {3, 2, 2, 3, 3, 2};

    set<int> intersection  = getIntersection(arr1, arr2);

    for(auto i: intersection){
        cout << i << "  ";
    }



    return 0;
}