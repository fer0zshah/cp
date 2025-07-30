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
        int l,k;
        cin>>l>>k;
        string s;
        cin>>s;
        int m0=0,m1=0;
        int um=0;
         for(int i=0;i<l/2;i++){
        // cout<<s[i]<<" "<<s[l-i-1]<<endl;
        if(s[i]==s[l-1-i] && s[i]=='0')m0++;
        else if(s[i]==s[l-1-i] && s[i]=='1')m1++;
    }       int m=(m1+m0);
            // cout<<m0<<" "<<m1<<endl;
        if((m)>k){
            if((m-k)%2==1){
            cout<<"NO"<<endl;
            }
            else{
                if(((m)-k)>2*min(m0,m1))cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
        else{
            if((k-(m))%2)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
     
     return 0;
    }