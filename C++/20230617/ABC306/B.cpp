#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    unsigned long long ans=0; //変数ans
    ll fac=1;
    ll a;
    for(int i=0;i<=63;i++)
    {
        cin>>a;
        ans += a*fac;
        fac*=2;
    }
    cout<<ans;
}
int main()
{
    solve();
}