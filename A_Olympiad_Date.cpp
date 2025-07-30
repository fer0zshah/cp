#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Read number of drawn digits
        vector<int> digits(n);
        
        for (int i = 0; i < n; i++) {
            cin >> digits[i];  // Read the drawn digits
        }

        string target = "01032025";  // Target sequence (ignoring dots)
        int j = 0;  // Pointer for target sequence

        for (int i = 0; i < n; i++) {
            if (digits[i] == target[j] - '0') {
                j++;  // Move to next character in target sequence
            }
            if (j == target.size()) {  // If target sequence is fully matched
                cout << i + 1 << endl;
                break;
            }
        }

        if (j < target.size()) {  // If we never completed the sequence
            cout << 0 << endl;
        }
    }

    return 0;
}
