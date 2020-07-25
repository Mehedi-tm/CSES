#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    ll c=1,ans=1;
    for(ll i=1; i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
        c++;
        ans=max(ans,c);
        }
        else
        {
            ans=max(ans,c);
            c=1;
        }
    }
    cout<<ans<<endl;
}
