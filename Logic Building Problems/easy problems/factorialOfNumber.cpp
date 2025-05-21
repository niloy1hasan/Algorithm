#include <iostream>
using namespace std;

long factorial(int number){
    long fact = 1;

    for(int i=2; i<=number; i++){
        fact *=i;
    }

    return fact;
}

long recursive_factorial(int number){
    if(number<=1)return 1;
    
    return number * recursive_factorial(number-1);
}

int main(){
    int number;
    cin >> number;

    cout << "factorial: ";
    cout << factorial(number);

    cout << "\nfactorial recursion: " << recursive_factorial(number);

    return 0;
}