#include <iostream>
using namespace std;

int update(int a){          // when passing value only , we can not update original value 
    a = a + 1;
    return a;
}
int update2(int &a){    // when passing value as reference , we can change the original value cause we directly get access to address
    a = a + 1;
    return a;
}

int main(){
    int a = 50;

    cout << "Value before update: " << a << endl;
    update(a);  
    cout << "Value after update: " << a << endl;


    cout << "Value before update2: " << a << endl;
    update2(a);  
    cout << "Value after update2: " << a << endl;
}
