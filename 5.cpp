#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    long long fact = 1;  // используем long long, так как факториал быстро растёт

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}