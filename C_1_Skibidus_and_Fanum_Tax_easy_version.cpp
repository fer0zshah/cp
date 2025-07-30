#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)

 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<LL>v(n);
    vector<LL>V;
    vector<LL>x;
    vector<LL>y;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    V=v;
    vector<LL>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        continue;
    }
    x=v;
    y=v;
    sort(x.begin(),x.end());
    sort(y.begin(),y.end(),greater<int>());
    if(x==v||y==v){
        cout<<"YES"<<endl;
        continue;
    }
    for( int i=0;i<n-1;i++){
        if(V[i]>V[i+1]){
            v[i]=a[0]-v[i];
        }   
    }
    vector<LL>va;
    vector<LL>vb;
    for(int i=0;i<n;i++){
        va.push_back(v[i]);
        vb.push_back(v[i]);
    }
    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end(),greater<LL>());
     if(va==v||vb==v){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
}
 
 return 0;
}