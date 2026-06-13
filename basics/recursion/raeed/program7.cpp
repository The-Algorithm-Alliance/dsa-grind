#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.size();
    bool f = true;
    for (int i = 0; i < n/2; i++) {
        if (str[i] != str[n-i-1])
            f = false;
    }

    if (f) cout << "Palindrome\n";
    else cout << "Not a Palindrome\n";

    return 0;
}