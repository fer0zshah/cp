#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    double l = s.size();
    double t;
    vector<double>v;
    double ans;
    bool f=false;
    for(int i=0;i<l-1;i++){
        
        if(s[i]!='t')continue;
        else  t=1;
        for(int j=i+1;j<l;j++){
            
            if(s[j]!='t')continue;
            else{
                t++;
                if((j-i+1)>=3){
                    f=true;
                     ans=(t-2)/(j-i-1);
                    v.push_back(ans);
                }         
            }
        }
    }
    if(f){
        sort(v.begin(),v.end());
        int ss=v.size();
        cout << fixed << setprecision(17) << v[ss-1];

    }else{
         cout << fixed << setprecision(17) << 0.0;
    }

   
    return 0;
}
