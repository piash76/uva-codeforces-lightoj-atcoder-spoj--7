




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;///1e6
ll a[maxn];


int main()
{


    speed()

    ll t,i,j,cas=0;
    ll n,q;cin>>n>>q;

    map<ll,ll> m1,m2;

    for(i=1;i<=n;i++) cin>>a[i];

   ll pls=0;
    while(q--)
    {
        ll t1;cin>>t1;
        if(t1==1)
        {
            ll idx,val;cin>>idx>>val;
            m1[idx]=val;
            m2[idx]=a[idx]+pls;


        }
        else if(t1==2)
        {
            ll x;cin>>x;
            pls+=x;

        }
        else
        {
            ll idx;cin>>idx;
            ll ans=a[idx]+pls-m2[idx]+m1[idx];
            cout<<ans<<endl;

        }



    }

    return 0;

}





