// when a variable or array is created normally , then is get stored in static memory 
// for eg : - int a = 5 ;
// here a static memory of 4 bytes will be created for a.


// Dynamic memory allocation is a way to allocate memory at runtime and memory get allocated in heap.
// for eg :- new int;
// this creates the 4 bytes memory in heap and returns the address.
// To access that address we uses pointer.
// for eg :-  int ptr = new int;
// here ptr is a pointer which stores the address of the memory allocated in heap.
// this creates 8 bytes of pointer memory in static memory and 4 bytes of memory in heap , so total memory will be 12 bytes.



#include <iostream>
using namespace std;

int sum(int* ptr , int n){

    int add = 0 ;
    for ( int i = 0 ; i < n ; i++){
        add = add + *(ptr + i) ;
    }
    return add ; 
}

int main(){

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int* ptr = new int[n] ;                  // 8 bytes of memory and n*4 bytes of memory so total will be 8+4*n.

    cout << "Enter the elements of array : ";
    for (int i = 0 ; i < n ; i++){
        cin >> *(ptr + i);
    }
    
    int ans = sum(ptr , n);
    
    cout << "Sum : " << ans ;

}