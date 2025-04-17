#include<bits/stdc++.h>
typedef long long int ll;
#define pp pair<ll,ll>
using namespace std;

bool compare(pp a, pp b)
{
    if(a.first>b.first)
        return true;

    else if(a.first==b.first)
        return a.second<b.second;

    else
        return false;
}

int main()
{
    ll n,d;
    ll p,t;
    map<pp,ll> mp;

    cin>>n>>d;
    pp a[n];

    for(ll i=0;i<n;i++)
    {
        cin>>p>>t;
        a[i]=make_pair(p,t);
        mp[a[i]]++;
    }

    sort(a,a+n,compare);

    cout<<mp[a[d-1]];

    return 0;
}