#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    return 0;
}