#include <iostream>
#include <array>
using namespace std;

int main(){
    
    array<int , 5> arr = {34 ,54 ,3 ,3, 12};

    // operation we can perform on array template

    cout << "Array size : " << arr.size() << endl;
    cout << "Array element at index 2 : " << arr.at(2) << endl;
    cout << "Array front element : " << arr.front() << endl;
    cout << "Array last element : " << arr.back() << endl;
    cout << "Array empty or not : " << arr.empty() << endl;
    cout << "Array maximum size : " << arr.max_size() << endl;
    

}