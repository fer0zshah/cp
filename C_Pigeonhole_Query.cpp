#include <bits/stdc++.h>
using namespace std;

int main() {

	 int n,q;
	 cin>>n>>q;
	 vector<int>v(n,1);
     map<int ,int>m;
	 for(int i=1;i<=1;i++){
		m[i]=v[i-1];
	 }
	
	 while(q--){
	 int count=0;
	 int val;
	 cin>>val;
	 
	 if(val==1){
        int p,h;
        cin>>p>>h;
        
     }
	 else if(val==2){
        int l=v.size();
        for(int i=0;i<l;i++){
            if(v[i]>1)count++;
        }
        cout<<count<<endl;
	 }
	     
	 }

    return 0;
}
