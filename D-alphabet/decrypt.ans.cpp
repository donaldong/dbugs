#include <iostream>
using namespace std;

int main() {
    char letter = 'a';
    for (int i = 0; i < 100; ++i) {
        cout << char(letter + (i % 26));
    }
    cout << endl;
    return 0;
}
