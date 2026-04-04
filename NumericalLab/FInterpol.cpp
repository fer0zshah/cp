#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
double FI(vector<double> &x, vector<vector<double>> &y, int n)
{
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            cout << y[j][i] << " ";
        }
        cout << endl;
    }
    double a;
    cin >> a;
    double p = 1;
    double sum = y[0][0];
    double u = (a - x[0]) / (x[1] - x[0]);
    for (int j = 1; j < n; j++)
    {
        p *= (u - j + 1) / j;
        sum += (p * y[0][j]);
    }
    return sum;
}
double BI(vector<double> &x, vector<vector<double>> &y, int n)
{
    for (int j = 1; j < n; j++)
    {
        for (int i = j; i < n; i++)
        {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i <=j; i++)
        {
            cout << y[j][i] << " ";
        }
        cout << endl;
    }
        double a;
    cin >> a;
    double p = 1;
    double sum = y[n - 1][0];
    double u=(a-x[n-1])/(x[1]-x[0]);
    for (int j = 1; j < n; j++) {
        p = p * (u + j - 1) / j;
        sum = sum + p * y[n - 1][j];
    }
return sum;
    // double u=(y[n])  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<double> x(n);
    vector<vector<double>> y(n, vector<double>(n, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i][0];
    }
    // double sum = FI(x, y, n);
    // cout<<sum<<endl;
    double sum = BI(x, y, n);
    cout << sum << endl;

    return 0;
}