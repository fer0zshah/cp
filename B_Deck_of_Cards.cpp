    #include<bits/stdc++.h>
    using namespace std;
    typedef long long LL;
     
    int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==n){
            for(int i=0;i<n;i++)cout<<'-';
            cout<<endl;
            continue;
        }
        vector<char>v(n,'+');
        int i=0,j=n-1;
        int ii=i,jj=j;
        for(int x=0;x<k;x++){
            if(s[x]=='0'){
                if(v[i]=='?'){
                     v[ii]='-';
                     i++;
                     ii++;
                     v[i]='?';
                }else{
                    v[i]='-';
                    i++;
            }
            }else if(s[x]=='1'){
                if(v[j]=='?'){
                    v[jj]='-';
                    j--;
                    jj--;
                    v[j]='?';
                }else{
                    v[j]='-';
                    j--;
                }
                }else{
                 if(v[j]=='?'){
                // v[i]='?';
                // v[j]='?';
                i++;
                j--;
                v[i]='?';
                v[j]='?';
              }else{
                 v[i]='?';
                v[j]='?';
                ii=i;
                jj=j;
                // i--;
                // j--;
              }
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i];
        }cout<<endl;
    }
     
     
     return 0; }