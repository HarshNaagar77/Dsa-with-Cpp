#include <iostream>
using namespace std;

int main(){
    int arr[] = {34, 54, 53 ,22,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for ( int i = 0 ; i < size-1 ; i++){

        for ( int j=0 ; j < size - i - 1 ; j++){

            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    for ( int k = 0 ; k < size ; k++){
        cout << arr[k] << " ";
    }
}