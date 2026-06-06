#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char ch;
    for (int i = 0; i < n; i++) {
        ch = 'A';
        for (int j = 0; j < i+1; j++) {
            cout << char(ch + j) << " ";
        }
        cout << "\n";
    }

    return 0;
}