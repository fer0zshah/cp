#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin>>n;
            int s=n,l=n+1;
            for(int i=0;i<n;i++){
                cout<<s<<" "<<l<<" "<<l+1<<" ";
                s--;
                l+=2;
            }
            cout<<endl;
        }
    }
    return 0;
}