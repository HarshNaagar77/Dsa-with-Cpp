#include <iostream>
using namespace std;

int isSorted(int *arr , int size){

    if( size == 0 || size == 1 ){
        return 1;
    }
    
    if( arr[0] > arr[1]){
        cout << "array is not sorted";
    }
    else{
       int ans =  isSorted(arr+1 , size-1);
       cout << "array is sorted";
}
}
 
int main(){

    int arr[5] = {2,4,55,9,11};
    int size = 5 ;

    int ans = isSorted( arr , size);

    
}