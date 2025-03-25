#include <iostream>
#include <math.h>
using namespace std;

void valueInput(string s, int & x){
    cout << "Type value of " + s << " = ";
    cin >> x;
}

int main(){
    // formula of distance between two points : sqrt((x2 - x1)^2 - (y2 - y1)^2)

    int x1, x2, y1, y2;
    valueInput("x1", x1);
    valueInput("x2", x2);
    valueInput("y1", y1);
    valueInput("y2", y2);

    float distance = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    cout << "Distance between two points : " << distance << endl;

    return 0;
}