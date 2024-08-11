#include <iostream>

using namespace std;

int main() {
    char str[20];
    int count = 0;

    cout << "Enter string: ";
    cin >> str;
    while (str[count] != '\0') {
        count++;
    }

    cout << "Length of string is: " << count << endl;

    return 0;
}  
