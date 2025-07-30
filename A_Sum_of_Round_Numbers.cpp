#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int i=0;
        int pw=1;
        while(n){
            int d=n%10;
            n/=10;
            if(d!=0)
            v.push_back(d*pw);
            i++;
            pw*=10;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;
    }
}