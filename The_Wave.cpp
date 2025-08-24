#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

bool bs(vector<LL>&v,LL key){
    LL l=0,r=v.size()-1;
    while(l<=r){
        LL mid=l-(l-r)/2;
        if(v[mid]==key){
            return true;
        }else if(v[mid]>key) r=mid-1;
        else if(v[mid]<key)l=mid+1;
    }
    return false;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL n,q;
cin>>n>>q;
vector<LL>v(n);
int neg=0;
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());  //-5 -4 -2  1  2  5 6    -3
while(q--){
    LL x;
    cin>>x;
    if(bs(v,x))cout<<0<<endl;
    else{
        // x=abs(x);
        LL y=n-(upper_bound(v.begin(),v.end(),x)-v.begin());
       
        if(y%2)cout<<"NEGATIVE"<<endl;
        else cout<<"POSITIVE"<<endl;
    }
}
 
 return 0; }