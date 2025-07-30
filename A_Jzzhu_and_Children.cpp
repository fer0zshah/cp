#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back({x,i+1});
}
queue<pair<int,int>>q;
for(int i=0;i<n;i++){
    if(m<v[i].first){
        // if(!q.empty())q.pop();
        q.push({v[i].first-m,v[i].second});
    }   
}
if(q.empty()){
    cout<<n<<endl;
}
else{
    auto x=q.front();
while(!q.empty()){
    x=q.front();
    if(x.first>m){
        q.push({x.first-m,x.second});
    }
    q.pop();
}
cout<<x.second<<endl;
}

// int si=s.size();
// cout<<si;
// if(si==0){
//     cout<<n;
// }else{
//     auto top=s.top();
//     cout<<top.second;
// }


 return 0;
}