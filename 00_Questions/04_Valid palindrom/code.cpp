#include <iostream>
using namespace std;

int palindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        
        while(left < right && !isalnum(s[left])){
            left++;
        }
        while(left < right && !isalnum(s[right])){
            right--;
        }

        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    if(palindrome(s)){
        cout << "The string is a palindrome" << endl;
    }
    else{
        cout << "The string is not a palindrome" << endl;
    }
}