#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> matrix){
    for(unsigned int i=0; i<matrix.size(); i++){
        for(unsigned int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }
}

int main(){
    vector<vector<int>> matrix = {
        // {12, 45, 78},
        // {34, 56, 90},
        // {23, 67, 89}
        {10, 20, 30},
        {5, 10, 20},
        {2, 4, 6}
    };

    vector<vector<int>> prefixMatrix(matrix.size(), vector<int> (matrix[0].size()));

    for(unsigned int i=0; i<matrix.size(); i++){
        for(unsigned int j=0; j<matrix.size(); j++){
            if(j==0){
                prefixMatrix[j][i] = matrix[j][i];
            } else {
                prefixMatrix[j][i] = matrix[j][i] + prefixMatrix[j-1][i];
            }
        }
    }

    for(unsigned int i=0; i<matrix.size(); i++){
        for(unsigned int j=0; j<matrix[i].size(); j++){
            if(j==0){
                prefixMatrix[i][j] = prefixMatrix[i][j];
            } else{
                prefixMatrix[i][j] = prefixMatrix[i][j] + prefixMatrix[i][j-1];
            }
        }
    }

    printMatrix(prefixMatrix);

    return 0;
}