#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // 1 не является простым числом
    if (n <= 1) {
        cout << "Не простое" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Простое" << endl;
    } else {
        cout << "Не простое" << endl;
    }

    return 0;
}