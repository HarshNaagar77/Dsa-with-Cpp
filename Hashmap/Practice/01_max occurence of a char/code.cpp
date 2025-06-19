#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s = "fgrhdcwjoskqjhnfvbdnhksjldkjb";
    
    unordered_map<char , int> m ;
   for ( char c : s){
    m[c]++;
   }

    // for( auto i : m){
    //     cout << i.first << " " << i.second << endl ;
    // }
    
    int count = 0 ;
    string max = "a";

    for ( auto i : m ){
        if(i.second > count){
            count += i.second;
            max = i.first ;
        }
    }
    cout << max << endl ;
}