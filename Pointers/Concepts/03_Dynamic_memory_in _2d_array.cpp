#include <iostream>
using namespace std ;

int main(){

    int n;
    cout << "Enter n ";
    cin >> n;


    // create 2d array
    int **ptr = new int*[n];
    for(int i = i ; i <= n ; i++){
        ptr[i] = new int[n];
    }



    // initialize 2d array
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << "Enter element at position [" << i << "][" << j << "] ";
            cin >> ptr[i][j];
        }
    }


    // print 2d array
    for( int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << ptr[i][j] << ' ';
        
        }
        cout << endl ;
    }

}