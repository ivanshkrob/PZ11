#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}