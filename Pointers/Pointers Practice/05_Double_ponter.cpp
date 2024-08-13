#include <iostream>
using namespace std;

int main(){

    int val = 10 ; 
    int* ptr = &val;
    int** ptr2 = &ptr ;
    cout << "Value of val: " << *ptr << endl;
    cout << "Value of val: " << **ptr2 << endl;
}