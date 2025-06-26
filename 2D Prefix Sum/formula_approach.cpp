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

    prefixMatrix[0][0] = matrix[0][0];

    for(unsigned int i=1; i<matrix[0].size(); i++){
        prefixMatrix[0][i] = prefixMatrix[0][i-1] + matrix[0][i];
    }

    for(unsigned int i=1; i<matrix.size(); i++){
        prefixMatrix[i][0] = prefixMatrix[i-1][0] + matrix[i][0];
    }

    for(unsigned int i=1; i<matrix.size(); i++){
        for(unsigned int j=1; j<matrix[i].size(); j++){
            prefixMatrix[i][j] = matrix[i][j] + prefixMatrix[i-1][j] + prefixMatrix[i][j-1] - prefixMatrix[i-1][j-1];
        }
    }


    printMatrix(prefixMatrix);

    return 0;
}