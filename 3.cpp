#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int x, sum = 0;
    cin >> x;

    while (x != 0) {
        sum += x;
        cin >> x;
    }

    cout << sum << endl;

    return 0;
}