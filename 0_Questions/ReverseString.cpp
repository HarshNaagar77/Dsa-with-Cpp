// Reverse string 
#include <iostream>
#include <vector>
using namespace std ;

int main(){
    string str ;
    vector<char> v1;
    
    cout << "Enter Your text : ";
    cin >> str ;
    
    for(int i = str.length() - 1 ; i >= 0 ; i-- ){ 
        v1.push_back(str[i]);
    }

    for(int i = 0 ; i < v1.size() ; i++){
        cout << v1[i] ;
    }
}