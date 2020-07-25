#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    ll n,x,i,m=0;
    cin>>n;
    ll a[n+5];
    x=(n*(n+1))/2;
    ll ans=0;
    for(i=0; i<n-1; i++)
    {
        cin>>a[i];
        m+=a[i];
    }
    ans=x-m;
    cout<<ans<<endl;




}


