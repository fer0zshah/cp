#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>c;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int j=31;
    while(j--){
        int cc=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0)cc++;
            v[i]/=2;
        }
        c.push_back(cc);
    }
    // reverse(c.begin(),c.end());
    int sum=0;
    for(int i=30;i>=0;i--){
        if(k>=c[i]){
            sum+=1<<i;
            k-=c[i];
        }
    }
    cout<<sum<<endl;

}
 
 return 0; }