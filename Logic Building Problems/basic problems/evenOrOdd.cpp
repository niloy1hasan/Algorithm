#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;

    //module -> reminder
    if(num%2==0){
        cout << "EVEN\n";
    } else {
        cout << "ODD\n";
    }

    //bitwise and 
    if(num&1){
        cout << "ODD\n";
    } else {
        cout << "EVEN\n";
    }

    //bitwise shift
    if(num == (num >> 1) << 1) {
        cout << "EVEN\n";
    } else {
     cout << "ODD\n";
     }


    return 0;
}