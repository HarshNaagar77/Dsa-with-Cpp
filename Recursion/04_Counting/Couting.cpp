// counting using recursion 

#include <iostream>
using namespace std;

int count(int n){

    //base case
    if(n == 0){
        return 0;
    }

    count(n-1);            // recursive relation
    cout << n << endl;
    return 0; 
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = count(n);
}