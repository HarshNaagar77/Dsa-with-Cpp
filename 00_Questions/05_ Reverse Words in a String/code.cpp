#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void wordRev(string &s){
    string rev = "";


    for ( int i = 0 ; i < s.length() ; i++ ){
        string word = "";
        while ( i < s.length() && s[i] != ' '){
        word += s[i];
        i++;
    }
        reverse(word.begin(), word.end());
        
        if( word.length() > 0 ){
            rev = rev + " " + word ;
        }
    }
    cout << rev.substr(1) << endl ;
        
}

int main(){
    string s = "  hello  world  ";

    reverse(s.begin(), s.end());

    wordRev(s);
}