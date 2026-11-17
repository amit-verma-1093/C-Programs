#include <iostream>
using namespace std;

int main() {
    string s;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> s;

    int n = s.length();

    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}