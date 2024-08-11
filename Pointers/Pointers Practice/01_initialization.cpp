#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value at address p: " << *p << endl;

    return 0;
}