#include <iostream>
using namespace std;

void reverse(int arr[] , int n ){
    if ( n==0 ){
        return ;
    }
    else{
        cout << arr[n-1] << ' ';
        reverse(arr , n-1);
    }
}

int main(){
    int arr[4] = { 1 ,2 ,3 ,5};
    int n  = sizeof(arr)/sizeof(arr[0]);
    reverse(arr , n);
}