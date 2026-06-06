#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char ch;
    for (int i = 5; i >= 1; i--) {
        ch = 'A';
        for (int j = 0; j < i; j++) {
            cout << char(ch + j) << " ";
        }
        cout << "\n";
    }

    return 0;
}