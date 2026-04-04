#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 vector<vector<int>> warshell( vector<vector<int>>dist,int V){
    int inf=1e8;

    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]!=inf&&dist[k][j]!=inf){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
    }
    return dist;
 }
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    LL inf=1e8;
    set<char>s,ss;
    vector<vector<int>>dist(26,vector<int>(26,inf));
    for(int i=0;i<n;i++){
        char u,v;
        cin>>u>>v;
        s.insert(u);s.insert(v);
        dist[u-'A'][v-'A']=1;
    }
        int m;
        cin>>m;
       vector<vector<int>>dis(26,vector<int>(26,inf));
    for(int i=0;i<m;i++){
        char u,v;
        cin>>u>>v;
        ss.insert(u);
        ss.insert(v);
        dis[u-'A'][v-'A']=1;
    }
    int v1=s.size();
    int v2=ss.size();
    if(v1!=v2){
        cout<<"NO"<<endl;
        continue; 
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                dist[i][j]=0;
            }
        }
    }
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                dis[i][j]=0;
            }
        }
    }
    dist=warshell(dist,v1);
    dis=warshell(dis,v2);
        int f=0;
     for(int i=0;i<min(n,m);i++){
        for(int j=0;j<min(n,m);j++){
            if(dist[i][j]==inf&&dis[i][j]!=inf){
                f=1;
                break;
            }
        }if(f)break;
    } 
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    cout<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<m;j++){
    //         if(dis[i][j]==inf)
    //         cout<<"inf"<<" ";
    //         else cout<<dis[i][j]<<" ";
    //     }cout<<endl;
    // }

}
 
 return 0; }