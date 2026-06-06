#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << j+1 << " ";
        }

        for (int j = 0; j < (n-i-2)*4; j++) {
            cout << " ";
        }

        for (int j = 0; j < i+1; j++) {
            cout << i+1-j << " ";
        }
        cout << "\n";
    }

    return 0;
}