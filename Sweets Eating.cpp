#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    ll i,j,k,n,m,l,t;
    cin>>n>>m;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll s=0;
    for(i=0;i<n;i++)
    {
      if(i+1>m)
      {
          a[i]+=a[i-m];
      }
      s+=a[i];
      cout<<s<<" ";
    }
  see_you;
}
