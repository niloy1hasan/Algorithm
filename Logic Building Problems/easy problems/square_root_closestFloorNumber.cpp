#include <iostream>
#include <math.h>
using namespace std;

int closestFloor_srqt(long number){
    int closest = 1;
    
    while(closest*closest <=number){
        closest++;
    }

    return closest;
}


int main(){
    long number;
    cin >> number;

    //build in function
    cout << floor(sqrt(number)) << endl;

    //loop approach
    cout << closestFloor_srqt(number) << endl;

    


    return 0;
}