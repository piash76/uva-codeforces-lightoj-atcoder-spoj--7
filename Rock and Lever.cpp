





///PROBLEM DESCRIPTION:and of two numbers will be greater than xor if MSB of these two numbers are same


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;




const int mod = 1000000007;


const int maxn = 311111;
ll a[maxn];


int main()
{
    speed()

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        for(i=0;i<n;i++) cin>>a[i];

        map<ll,ll> m;

        for(i=0;i<n;i++)
        {
            for(j=31;j>=0;j--)
            {
                if((1<<j)&a[i])
                {
                    //cout<<"A[i] "<<a[i]<<" J "<<j<<endl;

                    m[j]++;break;
                }
            }
        }

        ll ans=0;
        for(auto x:m)
        {
           // cout<<x.first<<" "<<x.second<<endl;
            if(x.second>=2)
            {
                ll s=x.second-1;
                ans+=(s*(s+1))/2;

            }
        }

        cout<<ans<<endl;



    }

}

