#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    cin >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    vector<int>V;
    V=v;
    vector<int> flip;
    for (int i = 0; i < m; i++)
    {
        for (int j = i ; j < m; j++)
        {
 
            v[j] = 1 - v[j];
            int o = 0;
            for (int k = 0; k < m; k++)
            {
                if (v[k])
                    o++;
            }
 

            flip.push_back(o);
        }
        v=V;
    }
    // for(int i=0;i<flip.size();i++){
    //     cout<<flip[i]<<" ";
    // }
    int mx=*max_element(flip.begin(),flip.end());
    cout<<mx<<endl; 

    return 0;
}