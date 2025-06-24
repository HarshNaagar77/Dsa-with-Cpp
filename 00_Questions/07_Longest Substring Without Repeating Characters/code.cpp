#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "abcabcbb";
    unordered_map<char, int> m;
    int l = 0, r = 0, len = 0;

    while (r < s.size()) {
        m[s[r]]++;

        while (m[s[r]] > 1) {
            m[s[l]]--;
            l++;
        }

        len = max(len, r - l + 1);
        r++;
    }

    cout << "Length of longest substring without repeating characters: " << len << endl;
    return 0;
}
