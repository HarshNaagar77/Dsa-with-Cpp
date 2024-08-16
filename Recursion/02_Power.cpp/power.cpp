#include <iostream>
using namespace std;

int power(int n  , int p){

    //base case
    if (p == 0) {
        return 1;
    }
    // Recursive case: n^p = n * n^(p-1)
    return n * power(n, p - 1);
}

int main(){

    int n , p ;
    cout << "Enter a number : ";
    cin >> n;
    cout << " Enter power : " ;
    cin >> p;

    int ans = power(n , p);
    cout << ans << endl;
}