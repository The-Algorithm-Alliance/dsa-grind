#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << j + 1 << " ";
        }
        cout << '\n';
    }

    return 0;
}