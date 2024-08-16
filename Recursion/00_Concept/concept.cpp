// Recursion => function calling itself again and again.
// It Consists of base case and recursive relation.
// Base case is the condition where the function stops calling itself and should always return something in code.
// Recursive relation is the relation between the current state and the next state of the function.


// example 

#include <iostream>
using namespace std ;

int update(int n ){

    //base case
    if(n == 0){
        return 0;
    }
    cout << n << endl;
    update(n-1);            // recursive relation
    return 0;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = update(n);
    cout << ans << endl;
}