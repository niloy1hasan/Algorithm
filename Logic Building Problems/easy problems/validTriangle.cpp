#include <iostream>
using namespace std;

bool validTriangle(int a, int b, int c){
   return ((a+b)>c && (a+c)>b && (b+c) > a);
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (validTriangle(a, b, c) ? "Valid" : "Invalid") << endl;

    return 0;
}