#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<vector<double>> v(n, vector<double>(n + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<double> sol(n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double r = v[j][i] / v[i][i];
            for (int k = 0; k <= n; k++)
            {
                v[j][k] -= r * v[i][k];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        sol[i] = v[i][n];
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                sol[i] = sol[i] - v[i][j] * sol[j];
        }
        sol[i] /= v[i][i];
    }

    for (int i = 0; i < n; i++)
        cout << sol[i] << " ";
    cout << endl;

    return 0;
}