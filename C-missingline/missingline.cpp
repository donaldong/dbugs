#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string line;
        int N;
        cin >> N;
        while (N--) {
            getline(cin, line);
            cout << line << endl;
        }
    }
    return 0;
}
