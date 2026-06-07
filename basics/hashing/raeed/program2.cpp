#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    pair<int, int> max = {0, 0};
    for (auto x: mp) {
        if (x.second > max.second) {
            max = x;
        }
    }
    cout << "Highest frequency element: " << max.first << "\n";

    pair<int, int> min = {100, 100};
    for (auto x: mp) {
        if (x.second < min.second) {
            min = x;
        }
    }
    cout << "Lowest frequency element: " << min.first << "\n";

    return 0;
}