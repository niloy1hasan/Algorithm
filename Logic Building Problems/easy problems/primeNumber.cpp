#include <iostream>
using namespace std;

bool primeCheckBasic(long n){
    if(n<=1) return false;

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

bool primeCheckBasicOptimized(long n){
    if(n<=1) return false;
    
    for(int i=2; i*i <= n; i++){
        if(n%i==0) return false;
    }

    return true;
}

bool primeCheckEfficient(long n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;

    for(long i=5; i * i <= n; i+=6){
        if(n%i==0 || n % (i+2)==0) return false;
    }

    return true;
}

int main(){
    long number;
    cin >> number;

    //loop school approach
   cout << "is Prime? = " << (primeCheckBasic(number) ? "YES":"NO") << endl;

   //loop school optimized approach

   // note: a non prime number can write as (a * b = n) where a, b !=1 or !=n
   // this (a, b)'s any one is less than sqrt(n) or both are equal to sqrt(n)
   // i * i <= n is an efficient way to check this without computing sqrt(n) directly.

   cout << "is Prime? = " << (primeCheckBasicOptimized(number)? "YES":"NO") << endl;

   //efficient approach (must needed for efficiently check big number)
   //note: greater than 3, then every prime number has a pattern
   // it is 6k(plus/minus)1
   // example : 
   //6 * 1 + 1 = 7 (prime)
   //6 * 1 - 1 = 5 (prime)
   //6 * 2 + 1 = 13 (prime)
   //6 * 2 - 1 = 11 (prime)
   //6 * 3 - 1 = 17 (prime)
   //6 * 3 + 1 = 19 (prime)
   //6 * 4 - 1 = 23 (prime)
   //6 * 5 - 1 = 29 (prime)
   // ..... 
   //so check greater than 3 as ((6 * i) - 1)%2==0 || ((6 * i) + 1)%2==0 => not prime
   // more optimized ( i = 5 and i+= 6) so check (n%i==0) || (n%(i+2)==0) => not prime

   cout << "is Prime? = " << (primeCheckEfficient(number)? "YES": "NO") << endl;





    return 0;
}