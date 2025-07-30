#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    int odd=0,ev=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)odd++;
        else ev++;
    }
    sort(v.begin(),v.end());
        int con=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==(v[i+1]-1)){
            con++;
            break;
        }
    }
    if(odd%2==0&&ev%2==0){
        cout<<"YES"<<endl;
    }else if(odd%2==1&&ev%2&&con){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

}
 
 return 0;
}