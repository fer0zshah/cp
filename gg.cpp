#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    ll T;
    cin >> T;
    while (T--)
    {
        double a, v, l, n;
        cin >> a >> v >> l >> n;

        if ((ceil(a/l) >= n) && (v > n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        
    }
    return 0; 
}