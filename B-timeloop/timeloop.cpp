#include <iostream>
using namespace std;

int main() {
    string msg = "help me! I'm stuck";
    string rev_msg;
    for (auto i = msg.size() - 1; i >= 0; ++i) {
        auto j = msg.size() - 1 - i;
        rev_msg[i] = msg[j];
    }
    cout << rev_msg << endl;
    return 0;
}
