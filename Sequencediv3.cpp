




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ff                      first
#define ss                      second

#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int mx =200009;///1e6
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        for(i=1;i<=n;i++) cin>>a[i];

        map<ll,ll> m1,m2;

        ll ans=LLONG_MAX;

        for(i=1;i<=n;i++)
        {
            ll x=a[i];
            if(m1[x]==0)
            {
                if(i==1)
                {
                    m1[x]=i;
                }
                else
                {
                    m1[x]=i;
                    m2[x]++;
                }

            }
            else
            {
                if(i-m1[x]==1)
                {
                    m1[x]=i;
                }
                else
                {
                    //cout<<"YES"<<endl;
                   // cout<<"I "<<i<<" m "<<m1[x]<<endl;

                    m1[x]=i;
                    m2[x]++;
                }

            }

            /*cout<<"ELE "<<endl;
            for(auto x:m1) cout<<x.ff<<" "<<x.ss<<endl;


            cout<<"ANS "<<endl;
            for(auto x:m2) cout<<x.ff<<" "<<x.ss<<endl;

            cout<<endl;*/


        }

        for(auto x:m1)
        {
            if(n-x.second!=0)
            {
                m2[x.first]++;
            }
        }

        /* cout<<"ANS "<<endl;
            for(auto x:m2) cout<<x.ff<<" "<<x.ss<<endl;

            cout<<endl;*/

        for(auto x:m2) ans=min(ans,x.second);

        if(ans==LLONG_MAX) ans=0;

        cout<<ans<<endl;



    ///printf("Case %lld: ",++cas);
    /// cout<<"Case "<<++cas<<": "<<s<<endl;
    }

    return 0;

}

/*

5
5
1 2 3 2 1

*/




