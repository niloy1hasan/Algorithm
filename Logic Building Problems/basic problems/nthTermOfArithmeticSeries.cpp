#include <iostream>
using namespace std;


int nthTermLoop(int firstTerm, int secondTerm, int n){
    int diff = secondTerm - firstTerm;

    for(int j=1; j<n; j++){
        firstTerm += diff;
    }

    return firstTerm;
}

int main(){
    int firstTerm, secondTerm, n;
    cout << "Type first-term and second-term of series: ";
    cin >> firstTerm >> secondTerm;
    cout << "Type n: ";
    cin >> n;
    //loop
    cout << n << "th term number : " << nthTermLoop(firstTerm, secondTerm, n) << endl;

    //calcutaion
    //formula: nth = firstTerm + (n - 1) * diff
    
    int nth = firstTerm + (n - 1) * (secondTerm - firstTerm);

    cout << n << "th term number : " << nth << endl;

    return 0;
}