
#includ<bits/stdc++>

lce(string a,string b,string ans){
    int n=a.size();int m=b.size();
    
    if(n<0||b<0)return ;
    int i=n-1,j=m-1;
    while(i>=0&&j>=0){
        if(a[i]==b[j]){
            i--;j--;
            ans.push_back(a[i]);
        }else if(a[i]!=b[j]){
            
            j--;
            lca(a,b,ans);
            i--;
            lca(a,b,ans);
        }
    }
}
using namespace std;
typedef long long LL;

int main(){
    string a,b,ans;
    cin>>a>>b;
    
    lcs(a,b,ans);
    cout<<ans<<endl;
    return 0;
}
//7 1 2 3 4 5 6 7
//8 1 2 3 5 8 13 21 34
//0


