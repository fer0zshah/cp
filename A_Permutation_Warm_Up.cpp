#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // Using the formula: floor(n^2 / 4) + 1
        int result = (n * n) / 4 + 1;
        cout << result << endl;
    }
    return 0;
}
