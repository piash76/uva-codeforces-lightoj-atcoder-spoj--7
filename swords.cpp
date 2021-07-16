#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,j,g=0,m=0,s=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    m=a[n-1];
    for(i=0;i<n;i++)
    {
       s+=m-a[i];
       g=__gcd(g,m-a[i]);
    }
    cout<<s/g<<" "<<g<<endl;

}
