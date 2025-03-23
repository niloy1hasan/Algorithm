#include <iostream>
using namespace std;

int closest(int n, int m){
    int closeNum = 0;
    int closeDiff = n;

    for(int i= m; i<= (m+n); i+= m){
        if(closeDiff > abs(n - i)){
            closeDiff = abs(n - i);
            closeNum = i;
        } else if( (closeDiff == abs(n - i)) && (closeNum < i)){
            closeNum = i;
        }
    }

    return closeNum;
}

int main(){
    int n, m;
    cout << "Type the number and divider: ";
    cin >> n >> m;

    cout << closest(n, m) << endl;

    return 0;
}