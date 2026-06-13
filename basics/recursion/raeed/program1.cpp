#include <iostream>
using namespace std;

void print(string name, int n) {
    if (n == 0)
        return;

    cout << name << " ";
    print(name, n-1);
}

int main() {
    int n;
    string name;

    cout << "Enter name and n: ";
    cin >> name >> n;

    print(name, n);

    return 0;
}