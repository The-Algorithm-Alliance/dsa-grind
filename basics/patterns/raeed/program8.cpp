#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i*2; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2*(n-i)-1; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}