#include <iostream>
#include <math.h>
using namespace std;

int main(){
    /*
    Divisors are numbers that divide another number exactly, with nothing left over.
    Example: 16
    The number 16 can be divided exactly by:
    1, 2, 4, 8, 16

    These divisors come in pairs:
    1 and 16
    2 and 8
    4 and 4
    8 and 2
    16 and 1

    After reaching the square root of the number (which is 4 for 16),
    the divisors start repeating in reverse order.

    So, when finding all divisors of a number,
    only need to check from 1 up to the square root of that number.
    For each number that divides it evenly,
    can also find its pair (target number ÷ that number).
*/

    long target;
    cin >> target;

    int root = sqrt(target);

    for(int i=1; i<=root; i++){
        if(target%i==0){
            cout << i << " and " << (target/i) << "\n";

            /*add condition if want to get only unique elements
            if(target/i==i) cout << i;
            else cout << i << " " << target/i;
            */
        }
    }

    return 0;
}