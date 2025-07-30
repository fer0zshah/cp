#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    string s;
	    cin>>s;
	    int l=s.size();
	    vector<pair<char,int>>v;
	    for(int i=0;i<l;i++){
	        if(s[i]=='1'){
	            
	        v.push_back({s[i],i});
	        }
	    }
	    int len=v.size();
        int d1;
        if(len!=0)  d1=v[0].second-0;
         else{
            cout<<"NO"<<endl;
            continue;
         }   
            bool flag=false;
	    for(int i=0;i<len;i++){
	        int d2=v[i].second-i;
            if(d1!=d2){
                flag =true;
                break;
            }
	    }
        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
	    
	}
    return 0;
}
