#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int value;
    vector<int> v;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    for (int i = 0; i < n/2; i++) {
        swap(v[i], v[n-i-1]);
    }

    cout << "Reversed array: ";
    for (auto x: v) {
        cout << x << " ";
    }

    return 0;
}