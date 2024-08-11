#include <iostream>
using namespace std;

int main(){

    int num = 199;
    int *ptr = &num ;

    cout << "*ptr : " << *ptr << endl;

    int *q = ptr ;
    cout << "*q : " << *q << endl;

 
}