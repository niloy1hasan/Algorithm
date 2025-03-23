#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long sum = 0;
    //loop
    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout << sum << endl;


    //mathematical summation 
    sum = 0;
    
        sum += (n * (n+1))/2;

    cout << sum << endl;



    return 0;
}