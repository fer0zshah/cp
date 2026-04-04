#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    vector<LL>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b=a;
    sort(b.begin(),b.end());
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[b[i]]=i;
    }
    for(int i=0;i<n;i++){
        a[i]=mp[a[i]];
    }

    int L=-1,R=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            L=i;break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=i){
            R=i;break;
        }
    }

    if(L==-1&&R==-1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }else{
        reverse(a.begin()+L,a.begin()+R+1);
        int f=1;
        for(int i=0;i<n;i++){
            if(a[i]!=i){
                f=0;
                break;
            }
        }
        if(f){
            cout<<"yes"<<endl;
            cout<<L+1<<" "<<R+1<<endl; 
        }else{
            cout<<"no"<<endl;
        }
    }
 
 return 0; }