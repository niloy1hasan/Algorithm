#include <iostream>
using namespace std;

long reverseDigit(long digit){
    long reverse = 0;
    while(digit>0){
        reverse = (reverse*10) + (digit % 10);
        digit /= 10;
    }

    return reverse;
}


long reverseDigitRecursive(long digit, long reverse = 0){
    if(digit<=0) return reverse;
    reverse = (reverse * 10) + digit%10;
    return reverseDigitRecursive(digit/10, reverse);
}

// long reverseDigitRecursive(long digit){
//     if(digit<=0) return 0;
//     if((digit/10)>0) return (digit %  10) * 10 + reverseDigitRecursive(digit/10);
//     else return digit%10;
// }

string reverseDigitStringApproach(string s){
    long len = s.length();
    int i=0;
    while(i<=len/2){
        swap(s[i], s[len-i - 1]);
        i++;
    }

    return s;
}

int main(){
    long digit;
    cin >> digit;
    string s = to_string(digit);

    //loop approach
    cout << reverseDigit(digit) << endl;

    //recursive approach
    cout << reverseDigitRecursive(digit) << endl;

    //string approach
    cout << reverseDigitStringApproach(s) << endl;


    return 0;
}