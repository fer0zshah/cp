#include <bits/stdc++.h>

using namespace std;

long long int binsr(long long int a[],long long int n, long long int x)
{
    long long int st,en,mid,ans=-1;
    st=0;
    en=n-1;
    if(x>a[en])
        return 0;
    if(x<a[st])
        return n;
    while(st<=en)
    {
        mid=(st+en)/2;
        if(a[mid]<=x&&x<a[mid+1])
        {
            return n-mid-1;
        }
        else if(x>=a[mid])
        {
            st=mid+1;
        }
        else
        {
            en=mid-1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,k,i,j,m;

    cin >> n ;

    long long int a[n],b[n],c[n],d[n],ans=0;
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
    }
    for(i=0;i<n;i++)
    {
        cin >> b[i] ;
    }
    for(i=0;i<n;i++)
    {
        cin >> c[i] ;
    }
    for(i=0;i<n;i++)
    {
        d[i]=binsr(c,n,b[i]);
    }
    for(i=1;i<n;i++)
    {
        d[n-1-i]=d[n-1-i]+d[n-i];
    }
    for(i=0;i<n;i++)
    {
        j=binsr(b,n,a[i]);
        ans+=d[n-j];
    }
    cout << ans << "\n" ;
    //cout << "Hello world!" << endl;
    return 0;
}
