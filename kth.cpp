#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];  
    }
    vector<LL>sum;
    int c=0;int j=n;
    while(c<n){
            int s=0;
        for(int i=c;i<n-c;i++){
            if(c>0&&i==j)continue;
            s+=v[i];
        }
        j--;
        sum.push_back(s);
        c++;
    }
    for(int i=0;i<sum.size();i++){
        cout<<sum[i]<<" ";
    }
 return 0;
}