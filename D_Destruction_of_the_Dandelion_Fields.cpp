#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<LL>v(n);
    vector<LL>e;
    vector<LL>o;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)o.push_back(v[i]);
        else e.push_back(v[i]);
    }

    int l=e.size();
    int L=o.size();
    if(L>0){
        sort(o.begin(),o.end(),greater<int>());
        LL sum=0;
        for(int i=0;i<l;i++)sum+=e[i];
        LL s=0;
        if(L%2)L=L/2+1;
        else L=L/2;
        for(int i=0;i<L;i++)s+=o[i];
        cout<<sum+s<<endl;
    }else cout<<0<<endl;

}
 
 return 0; }