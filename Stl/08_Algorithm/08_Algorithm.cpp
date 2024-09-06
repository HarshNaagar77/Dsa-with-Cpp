// Algorithm is a cpp stl which gives certin function to be done just by calling them 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector< int > v ;
    v.push_back(433);
    v.push_back(32);
    v.push_back(3);    
    v.push_back(64);

    // sort function is used to sort the vector   
    sort(v.begin() , v.end()) ;
    for ( auto i : v ){
        cout << i << ' ' ;
    }
    cout << endl ;

    cout << "Index of 64 :" << binary_search(v.begin() , v.end() , 64) << endl ;
    // binary_search function is used to search the element in the vector

    // max and min 
    int maxIt = *max_element(v.begin(), v.end());
    cout << "Max element : " << maxIt << endl;

    int minIt = *min_element(v.begin(), v.end());
    cout << "Min element : " << minIt << endl;


    // reverse function is used to reverse the vector
    reverse(v.begin() , v.end());
    for ( auto i  : v) {
        cout << i << ' ' ;
    }
}
