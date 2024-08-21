// For 2d array 
// first we have to create 1 double pointer which points to array containing pointer on each index .
// then using a for loop we have to create new heap on every index of array

#include <iostream>
using namespace std ;

int main(){

    int n , n2;
    cout << "Enter no. of rows : ";
    cin >> n;
    cout << "Enter no. of columns : " ;
    cin >> n2 ;


    // create 2d array
    int **ptr = new int*[n];
    for(int i = i ; i <= n ; i++){
        ptr[i] = new int[n2];
    }

 
    
    // initialize 2d array
    for(int i = 1 ; i <= n ; i++){ 
        for(int j = 1 ; j <= n2 ; j++){
            cout << "Enter element at position [" << i << "][" << j << "] ";
            cin >> ptr[i][j];
        } 
    }


    // print 2d array
    for( int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j <= n2 ; j++){
            cout << ptr[i][j] << ' ';
        
        }
        cout << endl ;
    }


}