#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<LL> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
     LL NEG = -1e18;
    vector<vector<LL>> dp(n + 1, vector<LL>(n + 1,NEG));
    dp[0][0] = 0;
    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {

            if(dp[i][j] == NEG) continue;
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

            if(dp[i][j] + a[i] >= 0) {
                dp[i + 1][j + 1] =
                    max(dp[i + 1][j + 1],
                        dp[i][j] + a[i]);
            }
        }
    }
    int ans = 0;
    for(int j = 0; j <= n; j++) {
        if(dp[n][j] >= 0) {
            ans = j;
        }
    }

    cout <<ans<<endl;

    return 0;
}