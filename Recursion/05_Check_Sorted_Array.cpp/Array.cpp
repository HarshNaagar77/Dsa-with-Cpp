#include <iostream>
using namespace std;

int isSorted(int *arr , int size){

    if( size == 0 || size == 1 ){
        return 1;
    }
    
    if( arr[0] > arr[1]){
        return 0;
    }
    else{
       int ans =  isSorted(arr+1 , size-1);
       return ans;
}
}
 
int main(){

    int arr[5] = {2,4,5,9,11};
    int size = 5 ;

    int ans = isSorted( arr , size);
    if( ans == 0 ){
        cout << "Array is not sorted" << endl;
    }
    else{
        cout << "Array is sorted" << endl;
    }
    
}