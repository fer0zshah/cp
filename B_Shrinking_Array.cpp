#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int f0 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(v[i] - v[i + 1] )<= 1)
            {
                f0 = 1;
                break;
            }
        }
        if (f0)
        {
            cout << 0 << endl;
        }
        else
        {
            int f = 0;
            for (int i = 0; i < n - 2; i++)
            {
                if (v[i] >= min(v[i + 1], v[i + 2]) && v[i] <= max(v[i + 1], v[i + 2]))
                {
                    f = 1;
                    break;
                }
            }
            for (int i = n; i > 1; i--)
            {
                if (v[i] >= min(v[i - 1], v[i - 2]) && v[i] <= max(v[i - 1], v[i - 2]))
                {
                    f = 1;
                    break;
                }
            }
            if(f)cout<<1<<endl;
            else cout<<-1<<endl;
        }
    }

    return 0;
}