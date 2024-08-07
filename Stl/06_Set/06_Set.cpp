// Set is a array which only contain unique values. 
// if repeated values are inserted , then it still only store only one value.
// output is always sorted.

#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> s ;
    s.insert(43);
    s.insert(32);
    s.insert(32);
    s.insert(64);
    s.insert(32);
    s.insert(33);
    s.insert(43);

    for ( int i:s){
        cout << i << endl ;
    }


    cout << "After erase" << endl;
    s.erase(s.begin());
    for ( int i:s){
        cout << i << endl ;
    }
}