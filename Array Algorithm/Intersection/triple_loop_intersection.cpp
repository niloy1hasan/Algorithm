#include <iostream>
#include <vector>
using namespace std;

vector<int> getIntesection(vector<int> arr1, vector<int> arr2){
    vector<int> intersection;
    int size1 = arr1.size();
    int size2 = arr2.size();

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                bool found = true;
                for(int k=0; k<intersection.size(); k++){
                    if(intersection[k]==arr1[i]){
                        found = false;
                        break;
                    } 
                }

                if(found) intersection.push_back(arr1[i]);
            }
        }
    }


    return intersection;
}



int main(){
    vector<int> arr1 = {1, 2, 3, 2, 1};
    vector<int> arr2 = {3, 2, 2, 3, 3, 2};

    vector<int> intersection = getIntesection(arr1, arr2);

    for(int i:intersection){
        cout << i << "  ";
    }

    return 0;
}