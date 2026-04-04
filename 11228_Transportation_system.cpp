#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int find(int x, vector<int> &par)
{
    if (par[x] == x)
        return x;
    return par[x] = find(par[x], par);
}

void Union(int u, int v, vector<int> &par, vector<int> &rank)
{
    int pu = find(u, par);
    int pv = find(v, par);
    if (rank[pv] == rank[pu])
    {
        par[pv] = pu;
        rank[pu]++;
    }
    else if (rank[pv] < rank[pu])
    {
        par[pv] = pu;
    }
    else
    {
        par[pu] = pv;
    }
}
// set<int>s;
int st=0;double road=0,rail=0;
void kruskal(vector<vector<double>> &edges, int V,int r)
{
    int e = edges.size();
    sort(edges.begin(), edges.end(), [](auto &a, auto &b)
         { return a[2] < b[2]; });
    vector<int> par(V + 1), rank(V + 1, 0);
    for (int i = 1; i < V + 1; i++)
        par[i] = i;
    double cost = 0;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        double w = edges[i][2];
        if (find(u, par) != find(v, par))
        {

            Union(u, v, par, rank);
            if(w<=r){
                road+=w;
            }else{
                rail+=w;
                st++;
            }
        }
    }

}

double dest(pair<double, double> u, pair<double, double> v)
{
    return (sqrt((u.first - v.first) * (u.first - v.first) + (u.second - v.second) * (u.second - v.second)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int T=t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        map<int, pair<double, double>> mp;
        for (int i = 1; i <= n; i++)
        {
            double x, y;
            cin >> x >> y;
            mp[i] = {x, y};
        }
        vector<vector<double>> edges;
        for (double i = 1; i <= n; i++)
        {
            for (double j = 1; j <= n; j++)
            {
                if (i != j)
                {
                    edges.push_back({i, j, dest(mp[i], mp[j])});
                }
            }
        }
        kruskal(edges,n,r);
        cout<<"Case #"<<T-t<<": ";
        cout<<st+1<<" "<<round(road)<<" "<<round(rail)<<endl;
         st=0;road=0;rail=0;
    }

    return 0;
}