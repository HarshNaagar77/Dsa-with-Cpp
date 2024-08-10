// search element by linear search in a 2d array 

#include <iostream>
using namespace std ;

int main(){

    int arr[3][3];


    for(int i = 1 ; i <= 3 ; i++){
        for(int j =1 ; j <= 3 ; j++){
            cout << "Enter arr" << '[' << i << "]" << "["  << j << "]" << " element :" ; 
            cin >> arr[i][j];
            }
        }


    for(int i = 1 ; i <= 3 ; i++){
        for(int j = 1 ; j <= 3 ; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }


    int search ;
    cout << "Enter the element you want to search : " ;
    cin >> search ;

    for(int i = 1 ; i <= 3 ; i++){
        for(int j = 1 ; j <= 3 ; j++){
            if(search == arr[i][j]){
                cout << "Element found at " << '[' << i << "]" << "[" << j << "]" << endl;
                return 0;
            }
        }
    }


}
