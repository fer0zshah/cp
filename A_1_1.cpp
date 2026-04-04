#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1] && s[i - 1] == '1')
            {
                s[i] = '1';
            }
        }
        // cout << s << endl;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
        }
        // cout << one << endl;

        vector<string> v;
        string x = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                x += s[i];
            }
            else
            {
                if (!x.empty())
                {
                    v.push_back(x);
                    x.clear(); 
                }
            }
        }
    
        if (!x.empty())
        {
            v.push_back(x);
        }
        int min=0;
        for (auto it : v)
        {
            int c=0;
            for(int i=0;i<it.size();i++){
                if(it[i]=='1')c++;
            }
            min+=c/2+1;
        }
        cout<<min<<" " <<one<<endl;
    }

    return 0;
}