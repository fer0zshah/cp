#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
bool valid(vector<string> b, int n)
{
    vector<int> left(n, 0);
    vector<int> upper(2 * n - 1, 0);
    vector<int> lower(2 * n - 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 'X')
            {
                left[i]++;
                upper[n - 1 + j - i]++;
                lower[i + j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (left[i] > 1)
        {
            return false;
        }
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (lower[i] > 1)
        {
            return false;
        }
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (upper[i] > 1)
        {
            return false;
        }
    }
    return true;
}

bool swapping(vector<string> &b, int n)
{
    vector<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 'X')
                q.push_back({i, j});
        }
    }

    for (auto it : q)
    {
        int r = it.first;
        int c = it.second;
        b[r][c] = '0';
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(b[i][j]=='X')continue;
                if(i==r||j==c||abs(i-r)||abs(j-c)){
                    b[i][j]='X';
                    if(valid(b,n)){
                        return true;
                    }
                    b[i][j]='0';
                }
            }
        }

        b[r][c]='X';
    }
    return false;
}
// vector<vector<sting>>ans;
// solve (int col ,int n ,vector<string>&b,vector<int>left,vector<int>lower,vector<int>upper){
//     if(col==n){
//         ans.push_back(b);
//         return ;
//     }

//     for(int row=0;row<n;row++){
//         if(!left[row]&&!lower[row+col]&&!upper[n-1+col-row]){
//             left[row]=1;lower[row+col]=1;upper[n-1+col-row]=1;
//             b[row][col]='X';
//             solve(col+1,n,b,left,lower,upper);
//             b[row][col]='0';
//             left[row]=0;lower[row+col]=0;upper[n-1+col-row]=0;
//         }
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while (cin >> n)
    {
        vector<string> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (valid(b, n))
        {
            cout << "YES" << endl;
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
            if (swapping(b, n))
            {
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << b[i] << endl;
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
                cout << endl;
            }
        }
    }

    return 0;
}