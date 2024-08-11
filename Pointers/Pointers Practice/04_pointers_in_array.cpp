#include <iostream>
using namespace std;

int main(){

    int arr[5] = {34 , 54 ,22 ,43, 23};
    int *p = arr;

    cout << *p << endl;
    cout << *(p+1) << endl;  
    cout << *(p+2) << endl;
    cout << *p + 1 << endl;

    cout << p << endl;
    cout << p+2 << endl;
    cout << *(p + 3) ; 
    cout << (arr+3);
}