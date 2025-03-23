#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int m, n;
    m = a, n = b;

    cout << "before swap\n" << "a = " << a <<  ", b = "  << b << "\n";
    
    cout << "after swap\n";
    
    //temp variable
    int temp = b;
    b = a;
    a = temp;
    cout << "a = " << a << ", b = " << b << endl;

    //reset
    a = m, b = n;

    //plus minus

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << ", b = " << b << endl;

    //reset
    a = m, b = n;

    // bitwise xor
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a = " << a << ", b = " << b << endl;

    //reset
    a = m, b = n;

    //build-in function
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;


    return 0;
}