// Vector is a dynamic array . 
// if its storage is full but we are still storing data in it then it DOUBLES its size to store more data.


#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(5) ;     // it means vector v is created with size of 5.

    // operations on vector

    cout << "Vector size : " << v.size() << endl;           // Size returns total elements in vector
    cout << "Vector capacity : " << v.capacity() << endl;   // Capacity returns total elements that can be stored in vector
    v.push_back(34);
    cout << "Vector size after push : " << v.size() << endl;          

    v.pop_back();
    cout << "Vector size after pop : " << v.size() << endl;           

}