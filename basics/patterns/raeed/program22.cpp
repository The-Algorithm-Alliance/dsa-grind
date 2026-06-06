#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << n-j << " ";
        }

        for (int j = 0; j < 2*(n-i-1)+1; j++) {
            cout << n-i << " ";
        }

        for (int j = 0; j < i; j++) {
            cout << n-i+1+j << " ";
        }

        cout << "\n";
    }

    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << n-j << " ";
        }

        for (int j = 0; j < 2*(n-i-1)+1; j++) {
            cout << n-i << " ";
        }

        for (int j = 0; j < i; j++) {
            cout << n-i+1+j << " ";
        }

        cout << "\n";
    }

    return 0;
}