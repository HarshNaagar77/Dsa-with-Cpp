// Euclide's algo is used to find the hcf or gcd of the given numbers.

// imagine we have to find gcd of two numbers a and b.
// so we write a function gcd(a , b) and 
// if a < b then b-a
// if a > b then a-b

// this process is repeated until either a or b become 0.
// then the value of non zero number is the gcd of the given numbers.


#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) { 
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int ans = gcd(a, b);

    cout << "GCD of given numbers is: " << ans << endl;
    return 0;
}
