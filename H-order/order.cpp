#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A = {3, 4, 7, 8, 9, 1};
    int B[] = {6, 7, 8, 10, 2, 3, 4};
    sort(A.rbegin(), A.end());
    sort(B[0], B[7]);
    for (int a : A) cout << a << " ";
    cout << endl;
    for (int b : B) cout << b << " ";
    cout << endl;
    delete[] B;
    return 0;
}
