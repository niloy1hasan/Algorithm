#include <iostream>
#include <math.h>

using namespace std;
//problem: given two number x and y, check any integer number i as power of x and that output is equal y
// check x ^ i = y is possible or not possible, where i is an integer number

string isPower(long x, long y){
    // 1's power always one,example: 1^100 = 1, so if add power always get 1, if y not 1 than false
    if(x==1) return y==1 ? "true" : "false";
    
    for(int i=0; round(pow(x, i))<=y; i++){
        long power = round(pow(x, i));

        if(power==y){
            return "true";
        }
    }

    return "false";
}


bool isPowerMultiMethod(long x, long y){
    if(x==1) return y==1;

    long power = 1;
    while( power < y){
        power *= x;
    }

    return power==y;
}


bool isPowerLogarithmic(long x, long y){
    if(x==1) return y==1;

    float result = log(y)/log(x);
    //check result is integer nor have floating value
    return result == floor(result);
}



int main(){
    long x, y;
    cin >> x >> y;

    //loop method
    cout << "is power? : " << isPower(x, y) << endl;

    //multiplication method
    cout << "is power? : " << (isPowerMultiMethod(x, y)? "Yes" : "No") << endl;

    //logarithmic mehod
    cout << "is power? : " << isPowerLogarithmic(x, y) << endl;


    

    return 0;
}