#include <iostream>
#include <vector>
using namespace std;

/* 
Difference Array is a special type of algorithm.
It is used when we need to insert (add) a value to a range multiple times.

Normally (Naive Approach):
use a loop from l to r and add x like this:
    for (int i = l; i <= r; i++) arr[i] += x;

But if do this multiple times, it becomes time-consuming and inefficient.

To solve this efficiently, use a Difference Array.


steps of differece array:
1. Create a vector diffArray with size = array size + 1
2. Initialize all values as 0
3. Take input: value x, left index l, right index r
4. Add x to diffArray[l]
5. Subtract x from diffArray[r + 1] if r + 1 < diffArray.size()
.....
(After all updates, build the final array using prefix sum:)
6. Set arr[0] = diffArray[0]
7. For remaining elements (i ≥ 1):
       arr[i] = arr[i - 1] + diffArray[i];

Now get the result of multiple range insertions in an efficient way.

behind the tricks of differece array:
for example: 
arr = 0   0   0   0   0   0
add value 5 from index 1 to 4
so ,  0   5   0   0   0   -5   (as difference array)
again add value 10 from index 2 to 4
so ,  0   5   10  0   0   -15   <=== final differece array

now do prefix sum:

formula is: 
for first element arr[0] = diffArray[0] and
 for others arr[i] = arr[i-1] + diffArray[i]

 so, 
    output          calculation    
    arr[0] = 0      diffArray[0] = 0
    arr[1] = 5      arr[1] = arr[1-1=0] + diffArray[1] = 0 + 5 = 5
    arr[2] = 15     arr[2] = a[1] + diffArray[2] = 5 + 10 = 15
    arr[3] = 15     arr[3] = a[2] + diffArray[3] = 15 + 0 = 15
    arr[4] = 15     arr[4] = a[3] + diffArray[4] = 15 + 0 = 15
    arr[5] = 0     arr[5] = a[4] + diffArray[5] = 15 + (-15) = 0

so, final output is {0, 5, 15, 15, 15, 0}    


*/

int main(){

    int size = 6;
    vector<int> array(size, 0);

    vector<int> diffArray(size+1, 0);

    int t;
    cin >> t;
    
    int l, r, x;

    while(t--){
        cout << "value: ";
        cin >> x;
        cout << "left and right: ";
        cin >> l >> r;
        diffArray[l] += x;
        if(r+1 < size+1){
            diffArray[r+1] -= x;
        }
    }


    array[0] = diffArray[0];
    for(int i=1; i<size; i++){
        array[i] = array[i-1] + diffArray[i];
    }


    cout << "differece array result: \n";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }

    return 0;
}