#include<bits/stdc++.h>
using namespace std;
typedef long long LL;


int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int h,b,k;
    cin>>h>>b>>k;
    vector<int>H(h),B(b);
    for(int i=0;i<h;i++){
        cin>>H[i];
    }
    sort(H.begin(),H.end());
    for(int i=0;i<b;i++){
        cin>>B[i];
    }
    sort(B.begin(),B.end());
    // for(int i=0;i<h;i++){
    //     cout<<H[i]<<" ";
    // }cout<<endl;
    // for(int i=0;i<B.size();i++){
    //     cout<<B[i]<<" ";
    // }
    int l=B.size();
    int i=0,j=0;
    int c=0;
    while(i<h&&j<b){
        if(H[i]<=B[j]){
            c++;
            i++;j++;
        }else j++;
    }
    if(c>=k)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
 return 0; }