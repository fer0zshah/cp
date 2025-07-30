#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<int,int>>p;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    p.push_back({x,y});
}
vector<pair<int,int>>v=p;

sort(p.begin(),p.end());
vector<pair<int,int>>fi=p;
   sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    });
vector<pair<int,int>>se=v;
// for(int i=0;i<n;i++){
//     cout<<fi[i].first<<"->"<<fi[i].second<<endl;
// }cout<<endl;
// for(int i=0;i<n;i++){
//     cout<<se[i].first<<"->"<<se[i].second<<endl;
// }cout<<endl;
int f=0;
for(int i=0;i<n-1;i++){
    if(fi[i].first<se[i].first&&fi[i].second>se[i].second){
        f=1;
        break;
    }
}
if(f)cout<<"Happy Alex";
else cout<<"Poor Alex";
 
 return 0;
}