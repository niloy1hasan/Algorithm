#include <iostream>
using namespace std;

void recursiveMultiplication(int n, int i=10){

    if(i>1){
        recursiveMultiplication(n, i-1);
    }

    cout << n << " x " << i << " = " << n * i << "\n";

}

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=10; i++){
        cout << n << " x " << i << " = " << i*n << "\n";
    }

    cout << endl << endl;

    recursiveMultiplication(n);

    return 0;
}