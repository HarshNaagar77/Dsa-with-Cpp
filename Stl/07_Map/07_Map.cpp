// Map contains key and value 
// a key always point to a single value
// if we insert a key which is already present then it will update the value of that key.
// output is always sorted according to key.


#include <iostream>
#include <map>
using namespace std;

int main(){

    map < int , string> m;          // int is key and string is value

    m.insert({1 , "harsh"});
    m.insert({2 , "naagar"});
    m.insert({3 , "hello"});            // 3 is key wand  hello is string

    for ( auto i : m){
        cout << i.first << " " << i.second << endl;             // i.first prints key and i.second print value
    }

    cout << "After erase : " << endl ;

    m.erase(2);                             // erase the value at key 2 
    for ( auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    m[3] = "hola";                  // Updates the value at a index 3 

    for( auto i : m){
        cout << i.first << " " << i.second << endl;
    }

}