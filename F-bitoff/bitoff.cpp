#include <iostream>
using namespace std;

int power(int n) {
    if (n == 0) return 0;
    int p = power(n / 2);
    if (n & 1) return p * p;
    return p * p * 2;
}

int main() {
    int n;
    cin >> n;
    cout << power(n) << endl;
}
