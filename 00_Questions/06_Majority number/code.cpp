#include <iostream>
#include <unordered_map>
using namespace std;

int major( int arr[] , int n){
        unordered_map<int , int > m;
        int ans = 0 ;
        for (int idx = 0; idx < n; ++idx) {
            m[arr[idx]]++;
        }

        for( auto& j : m){
            if ( j.second > n/2){
                ans = j.first ;
            }
        }
        return ans;
}

int main(){
     int arr[8] = {1,2,4,4,4,4,2,4};
     int n = sizeof(arr)/sizeof(arr[0]);

     int ans = major(arr , n);
     cout << ans << endl;
}