// Insertion and deletion can be performed from both ends.
// It can also change its size same as vector.


#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;
    cout << "Size : " << d.size() << endl;

    d.push_back(10);
    d.push_front(32);
    d.push_front(3);
    d.push_back(20);
    d.push_back(70);
    d.push_back(6);
    d.push_back(54);

    cout << "Size after insertion : " << d.size() << endl;
    for(int i:d){
        cout << i << ' ';
    }

   d.pop_back();
   d.pop_front();

    cout << endl ;
    cout << "Size after deletion : " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
    }



    // TO delete data from deque we can use erase function.
    // Erase function take parameter as ramge of from where to where the data should be deleted

    d.erase(d.begin() , d.begin()+2);
    cout << endl ;
    cout << "Final deque : " << endl ;
    for ( int i : d){
      cout << i << ' ';
    }

    return 0;


}
