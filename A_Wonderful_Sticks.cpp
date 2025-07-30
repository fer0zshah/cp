#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            c++;
        }
    }
    int j=c+1;
    vector<int>v;
    v.push_back(j);
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            v.push_back(c);
            c--;
        }else{
            j++;
            v.push_back(j);
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}
 
 return 0;
}