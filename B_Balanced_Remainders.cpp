#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 3 == 0)
            {
                c0++;
            }
            else if (x % 3 == 1)
            {
                c1++;
            }
            else if (x % 3 == 2)
            {
                c2++;
            }
        }
        int x = n / 3;
        int a = c0 - x;
        int b = c1 - x;
        int c = c2 - x;
        int cnt = 0, mn;
        if (a < 0)
        {
            if (c > 0)
            {
                mn = min(c, abs(a));
                cnt += mn;
                // cout<<mn<<endl;
                a += mn;
                // cout<<a<<endl;
            }
            if (a < 0)
            {
                cnt += 2 * abs(a);
            }
        }
        if (b < 0)
        {
            if (a > 0)
            {
                mn = min(a, abs(b));
                cnt += mn;
                b += mn;
            }
            if (b < 0)
            {
                cnt += 2 * abs(b);
            }
        }
        if (c < 0)
        {
            if (b > 0)
            {
                mn = min(b, abs(c));
                cnt += mn;
                c += mn;
            }
            if (c < 0)
            {
                cnt += 2 * abs(c);
            }
        }
        cout << cnt << endl;
    }

    return 0;
}