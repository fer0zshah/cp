#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
        LL n, l;
        cin >> n >> l;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b, x, y;
            cin >> a >> b >> x >> y;
            if (x == y&&a==b)
            {
                 c++;
            }
            else if ((x + y) == l&&a ==-b)
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}