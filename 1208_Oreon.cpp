#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int find(int x,vector<int>&par){
    if(par[x]==x)return x;
    return par[x]=find(par[x],par);
}

void Union(int u,int v,vector<int>&par,vector<int>&rank){
    int pu=find(u,par);
    int pv=find(v,par);
    if(rank[pv]==rank[pu]){
        par[pv]=pu;
        rank[pu]++;
    }else if(rank[pv]<rank[pu]){
        par[pv]=pu;
    }else{
        par[pu]=pv;
    }
}
  vector<vector<int>>ans;
LL kruskal(vector<vector<int>>&edges,int V){
    int e=edges.size();
    sort(edges.begin(),edges.end(),[](auto &a,auto &b){
        return a[2]<b[2];
    });
    vector<int>par(V+1),rank(V+1,0);
    for(int i=0;i<V;i++)par[i]=i;
    LL cost=0;
    for(int i=0;i<e;i++){
        int u=edges[i][0];int v=edges[i][1];int w=edges[i][2];
        if(find(u,par)!=find(v,par)){
            cost+=w;
            ans.push_back({u,v,w});
            Union(u,v,par,rank);
        }
    }
    int r=find(1,par);
    for(int i=2;i<=V;i++){
        if(find(i,par)!=r)return -1;
    }

    return cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int T = t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        vector<vector<int>> mat(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            string s2;
            int k = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == ',' && s[j + 1] == ' ')
                {
                    int x;
                    x = stoi(s2);
                    mat[i][k] = x;
                    k++;
                    s2.clear();
                }
                else
                {
                    s2.push_back(s[j]);
                    if (j == s.size() - 1)
                    {
                        mat[i][k] = stoi(s2);
                    }
                }
            }
        }
        vector<vector<int>>edges;
        for (int i = 0; i <= n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(mat[i][j]>0)
                edges.push_back({i+1,j+1,mat[i][j]});
            }
        }
        LL cost=kruskal(edges,n);
        // cout<<cost<<endl;
          cout << "Case " << T-t << ":\n";
        for (auto &e : ans) {
            char a = 'A' + e[0]-1;
            char b = 'A' + e[1]-1;
            cout << a << "-" << b << " " << e[2] <<endl;
        }
        ans.clear();
    }
    return 0;
}