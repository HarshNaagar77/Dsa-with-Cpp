#include <iostream>
using namespace std;

int fact(int n){

    if ( n == 0 ){
        return 1 ;
    }

    int ans = n * fact(n-1);
    return ans ;
}

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;
}