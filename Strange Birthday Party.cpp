






///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =3000009;///1e6
ll k[mx],c[mx];


int main()
{


    speed()

    ll i,j,cas=0;
    ll t;cin>>t;
    while(t--)
    {

    ll n,m;cin>>n>>m;

    for(i=1;i<=n;i++) cin>>k[i];

    for(i=1;i<=m;i++) cin>>c[i];

    sort(k+1,k+n+1);

    ll idx=1;
    ll s=0;

    for(i=n;i>=1;i--)
    {
        if(idx<=k[i])
        {
            s+=c[idx++];
        }
        else
        {
            s+=c[k[i]];
        }
    }

    cout<<s<<endl;

    }


    return 0;

}




