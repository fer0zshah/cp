#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        LL x;
        cin >> x;

        vector<int> v;
        LL s = 0;

        while(x){
            int d = x % 10;
            v.push_back(d);
            s += d;
            x /= 10;
        }
        v[v.size()-1] -= 1;
        sort(v.begin(), v.end(),greater<int>());
        s -= 9;
        int ans = 0;

        for(int i = 0; i < v.size(); i++){
            if(s > 0){
                s -= v[i];
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}