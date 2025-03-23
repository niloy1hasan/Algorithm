#include <iostream>
using namespace std;

int oppsiteNumberByCondition(int n){
    if(n==6) return 1;
    if(n==5) return 2;
    if(n==4) return 3;
    if(n==3) return 4;
    if(n==2) return 5;
    if(n==1) return 6;
    else return -1;
}

int oppsiteNumberByCalculation(int n){
    return 7 - n;
}

int main(){
    int n;
    cout << "type a 1 to 6 number that's opposite number you want to know:\n";
    cin >> n;

    //condition based
    cout << oppsiteNumberByCondition(n) << endl;

    //calculation basaed
    cout << oppsiteNumberByCalculation(n) << endl;

    return 0;
}