#include <iostream>
using namespace std;

void customPrint(string str , int n){
    if ( n== 0){
        return ;
    }
    else{
        cout << str << endl ;
        customPrint(str , n - 1);
    }
}

int main() {

    string str = "Harsh";
    customPrint(str, 5); 
}