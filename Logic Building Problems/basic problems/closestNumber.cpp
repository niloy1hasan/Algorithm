#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int reminder = n % m;
    int lowest = n - reminder;
    int highest = n + m - reminder;
    int closest = ( (n - lowest) == (highest-n) ) ? highest : (( ( n - lowest) < (highest - n) )? lowest : highest);
    cout << closest << endl;
    return 0;
}