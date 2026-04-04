#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL t=1;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    // vector<string>v(n);
    vector<vector<LL>>s(12,vector<LL>(12,0));
    for(LL i=0;i<n;i++){
        string ss;
        cin>>ss;
        LL j=ss[0]-'a';
        LL k=ss[1]-'a';
        s[j][k]++;

    }
    // for(LL i=0;i<12;i++){
    //     for(LL j=0;j<12;j++){
    //         cout<<s[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }cout<<endl;
    LL sum=0;
    for(LL i=0;i<12;i++){
        LL c=0;
        LL f=0;
         LL x=0,S=0;
        for(LL j=0;j<12;j++){
            if(s[i][j]!=0){
                c+=s[i][j];
                x=(s[i][j]*s[i][j]-s[i][j])/2;
                 S+=x;
            }
        }
         sum+=((c*c-c)/2-S);
        // cout<<c<<"->"<<sum<<endl;

    }
    //    cout<<sum<<endl;
    for(LL i=0;i<12;i++){
        LL c=0;
        LL f=0;
        LL x=0,S=0;
        for(LL j=0;j<12;j++){
            if(s[j][i]!=0){
                c+=s[j][i];
                x=(s[j][i]*s[j][i]-s[j][i])/2;
                S+=x;
            }
        }
        sum+=((c*c-c)/2-S);
        //   cout<<c<<"->"<<sum<<endl;
    }
    cout<<sum<<endl;
}
 
 return 0; }