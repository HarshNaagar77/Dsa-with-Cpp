#include <iostream>
using namespace std;

int main(){

    int arr[5];

    cout << "Enter 5 integers ->  " << endl;
    
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int arrSize = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < arrSize - 1; i++){
        int minIndex = i;

 
        for (int j = i + 1; j < arrSize; j++){
            if (arr[j] < arr[minIndex]){
            int temp = arr[j];
            arr[j] = arr[minIndex];
            arr[minIndex] = temp;
            }
        }

    }
    
    cout << "Sorted array: ";
    for (int k = 0; k < arrSize; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
