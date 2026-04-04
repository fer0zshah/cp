    #include<bits/stdc++.h>
    using namespace std;
    typedef long long LL;
     
    int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<LL>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<int>s;
        int f=0;LL p=1;
        while(true){
            for(int i=0;i<n;i++){
                int lsb=v[i]&1;
                s.insert(lsb);
                v[i]>>=1;
                
                if(s.size()>1){
                    f=1;break;
                }
            }
            if(f)break;
            else {
                s.clear();
                p*=2;
            }
        }
        cout<<p*2<<endl;
    }
     
     return 0; }