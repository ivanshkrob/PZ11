#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    int count = 0;
    
    // Обрабатываем отрицательные числа
    n = abs(n);
    
    // Если число 0, то выводим 0 (игнорируем)
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    while (n > 0) {
        count++;
        n /= 10;
    }
    
    cout << count << endl;
    
    return 0;
}