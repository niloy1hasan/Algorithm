#include <iostream>
using namespace std;

long sumOfDigit(long digit){
    long sum = 0;

    while(digit>0){
        sum += digit % 10;
        digit /= 10;
    }

    return sum;
}


long sumOfDigitRecursive(long digit){
    if(digit<=0) return 0;
    
    return digit % 10 + sumOfDigitRecursive(digit/10);
}

long sumOfDigitStringMethod(string s){
    long sum = 0;
    for(char i : s){
        sum += i - '0';
    }

    return sum;
}




int main(){
    long digit;
    cin >> digit;
    string s = to_string(digit);

    //loop approach
    cout << sumOfDigit(digit) << endl;

    //recursive approach
    cout << sumOfDigitRecursive(digit) << endl;

    //string approach
    cout << sumOfDigitStringMethod(s) << endl;




    return 0;    
}