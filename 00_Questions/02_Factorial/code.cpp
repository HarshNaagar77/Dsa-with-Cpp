#include <iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    else{
        int ans = n * fact(n-1);
        return ans;
    }
}

int main(){
    int n = 10 ;
    int ans = fact(n);
    cout << ans << endl;
}