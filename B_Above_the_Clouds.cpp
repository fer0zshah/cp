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
    int freq[26]={0};
    for(auto ch:s){
        freq[ch-'a']++;
    }
    set<char>ss;
    for(int i=1;i<n-1;i++){
        ss.insert(s[i]);
    }
    int f=0;
    for(int i=0;i<26;i++){
        if(freq[i]>1){
            if(ss.count(char(i+'a'))){
                f=1;
            }
        }
    }
    if(f)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
 
 return 0;
}