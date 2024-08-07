#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l1;
    cout << "Size : " << l1.size() << endl;

    l1.push_back(10);
    l1.push_front(32);
    l1.push_front(3);

    cout << "Size after insertion : " << l1.size() << endl;
    for(int i:l1){
        cout << i << ' ';
    }
    
}


// In list , insertiion and deletion is very easy same as deque and have time complexity of O(n).
// But the main difference between list and deque is that list is doubly linked list and deque is dynamic array.
// and we can not find element at any place in list according to choice because elements can only be access by 
// traversing due to which it have timecomeplaxity of O(n) .