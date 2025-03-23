#include <iostream>
using namespace std;

int closestNumber(int n, int m){
    int quotient = n/m;
    int n1 = m * quotient;
    int n2;

    if(quotient > 0){
        n2 = m * (quotient + 1);
    } else {
        n2 = m * (quotient - 1);
    }

    if(abs(n - n1) < abs(n - n2)){
        return n1;
    }
    
    return n2;
}


int main(){
    int m, n;
    cout << "Type the number and divider: ";
    cin >> n >> m;

    cout << closestNumber(n, m) << endl;

    return 0;
}