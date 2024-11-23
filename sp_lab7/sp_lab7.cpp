#include <iostream>
#include <conio.h>
using namespace std;

int divs(int n, int div) {
    if (div >= n) {
        return 0;
    }
    if (n % div == 0) {
        return divs(n, div + 1) + 1;
    }
    else {
        return divs(n, div + 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n, div = 2;
    cout << "n = ";
    cin >> n;
    if (n <= div) {
        cout << "n равен или меньше делителя";
        return -1;
    }
    else {
        cout << "Количество делителей числа " << n << ": " << divs(n, div) << endl;
    }
    return 0;
}
