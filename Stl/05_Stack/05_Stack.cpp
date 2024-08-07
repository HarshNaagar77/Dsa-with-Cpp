#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;
    return 0;
}