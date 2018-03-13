#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int T;
    getline(cin, line);
    T = stoi(line);
    while (T--) {
        int N;
        getline(cin, line);
        N = stoi(line);
        while (N--) {
            getline(cin, line);
            cout << line << endl;
        }
    }
    return 0;
}
