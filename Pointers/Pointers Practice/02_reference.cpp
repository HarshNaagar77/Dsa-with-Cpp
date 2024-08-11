#include <iostream>
using namespace std;

int main(){

    int num = 10;
    int *ptr = &num;

    int a = num;
    a++ ;
    cout << a << endl;              // value value of a is changed but num remain same 
    cout << num << endl;            
 

    (*ptr)++;
    cout << *ptr << endl;           // value of both ptr and num gets changed 
    cout << num << endl;            
}