#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int x = 1, xr = 0;
        vector<int> v(n);
        for (int i = l-1; i <= r-2;)
        {
            if ((x ^ xr) == 0)
            {
                x++;
                continue;
            }
            v[i] = x;
            xr = x ^ xr;
            x++;
            i++;
        }
        v[r-1]=xr;

        int j = (r-2);
        for (int i = l - 2; i >= 0; i--)
        {
            v[i] = v[j];
            j--;
        }


        int j2 = r-2 ;
        for (int i = r; i < n; i++)
        {
            v[i] = v[j2];
            j2--;
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}