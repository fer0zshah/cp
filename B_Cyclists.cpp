#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        LL n, k, p, m;
        cin >> n >> k >> p >> m;

        vector<LL> v(n);
        vector<LL> cc, nc; 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        LL fp = v[p - 1];
        if (p > k) {
            for (int i = 0; i < p - 1; i++) {
                nc.push_back(v[i]); 
            }
            sort(nc.begin(), nc.end());
            for (int i = 0; i < p - k; i++) {
                fp += nc[i];
            }
        }
        
        if (fp > m) {
            cout << 0 <<endl;
            continue;
        }
        
        LL ans = 1; 
        m -= fp;
        for (int i = 0; i < n; i++) {
            if (i == p - 1) continue;
            cc.push_back(v[i]);   
        }

        sort(cc.begin(), cc.end());
        
        LL sum = v[p - 1];
        for (int i = 0; i < n - k; i++) {
            sum += cc[i];
        }
        cout << ans + (m / sum) <<endl;
    }
    return 0;
}