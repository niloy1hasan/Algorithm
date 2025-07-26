#include <iostream>
#include <vector>
using namespace std;

/*
  A Greedy Algorithm is a type of algorithm
  where, in every step, pick a value using the greedy method.
  The greedy method means choosing the best and most optimal option available at that moment.

  A simple example:
  need to pay 47 taka.
  Available notes: 20tk, 10tk, 5tk, 2tk, and 1tk.

  Step by step:
  - Pick 20tk → total = 20
  - Pick another 20tk → total = 40
  - 20 + 20 + 10 = 50 > 47 → skip 10tk
  - Pick 5tk → total = 45
  - Pick 2tk → total = 47
  Done

  This is greedy because at each step choose the highest note
  that doesn’t exceed the remaining amount.
*/

void minimumNote(vector<int> notes, int amount){
    int noteAmount = 0;
    vector<int> pickedNote;
    int i=0;
    int size = notes.size();

    while(amount>0 && i<size){
        if(amount>=notes[i]){
            amount -= notes[i];
            noteAmount++;
            pickedNote.push_back(notes[i]);
        } else {
            i++;
        }
    }


    cout << "Total note: " << noteAmount << "\n";
    for(int i:pickedNote){
        cout << i << "tk, ";
    }
}


int main(){

    vector<int> notes = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int amount = 47;

    minimumNote(notes, amount);


    return 0;
}