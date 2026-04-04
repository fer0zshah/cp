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
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            for (int j = 0; j < l; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
            reverse(v[i].begin(), v[i].end());
        }
        vector<vector<int>> ans(n);

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            set<int> s;
            for (int j = 0; j < v[i].size(); j++)
            {
                int x = v[i][j];
                if (!s.count(x))
                {
                    ans[i].push_back(x);
                    s.insert(x);
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(auto it: ans[i])cout<<it<<" ";
        //     cout<<endl;
        // }

        vector<int>r;
        sort(ans.begin(), ans.end());
        set<int>s;
        for (int i = 0; i < n; i++)
        {   
        
            for (auto it : ans[i]){
                if(!s.count(it)){
                    s.insert(it);
                    r.push_back(it);
                }

            }
            
        }
        for (auto it : r) cout << it << " ";
        cout << endl;
    }

    return 0;
}