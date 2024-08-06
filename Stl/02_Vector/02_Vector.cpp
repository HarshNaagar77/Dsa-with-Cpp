// Vector is a dynamic array . 
// if its storage is full but we are still storing data in it then it DOUBLES its size to store more data.
// It act as a stack so insertion and deletion is only from back.


#include <iostream>
#include <vector>
using namespace std;

int main(){  

    vector<int> v1 ;            // it means vector v2 is created with default size of 0.
    vector<int> v2(5 , 1) ;     // it means vector v2 is created with size of 5 and all values are initialised as 1.

    // operations on vector

    cout << "Vector size : " << v2.size() << endl;           // Size returns total elements in vector
    cout << "Vector capacity : " << v2.capacity() << endl;   // Capacity returns total elements that can be stored in vector
    v2.push_back(34);
    cout << "Vector size after push : " << v2.size() << endl;     

    v2.pop_back();
    cout << "Vector size after pop : " << v2.size() << endl;      


    v1.push_back(10);
    v1.push_back(20);
    cout << "Vector V1 element at position 1 : "  << v1.at(1)  << endl;    


    v2.clear();
    cout << "Vector size after clear : " << v2.size() << endl; 
    cout << "Vector capacity after clear : " << v2.capacity() << endl;
    // It only clears the values of array not the capacity . so , size = 0 and capacity is still default
}