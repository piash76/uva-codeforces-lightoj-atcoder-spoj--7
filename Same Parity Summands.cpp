




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long



#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl

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
        ll n,k;cin>>n>>k;
        if(n%2==0)
        {

            if(k==1) {cy; cout<<n<<endl;}
            else if(k==n-1 or k>n) cn;
            else if(k==n)
            {
                cy;
                for(i=1;i<=n;i++) cout<<1<<" ";
                cout<<endl;
            }
            else
            {


                if(k%2)
                {
                   ll x=n-2*(k-1);
                   if(x>0)
                   {
                       cy;
                    for(i=1;i<=k-1;i++) cout<<2<<" ";
                   cout<<x<<endl;
                   }
                   else cn;

                }
                else
                {
                    ll x=n-(k-1);
                    if(x>0)
                    {
                        cy;
                         for(i=1;i<=k-1;i++) cout<<1<<" ";
                    cout<<n-(k-1)<<endl;
                    }
                    else cn;

                }
            }


        }
        else
        {
            if(k==1) {cy; cout<<n<<endl;}
            else if(k==n-1 or k>n) cn;
            else if(k==n)
            {
                cy;
                for(i=1;i<=n;i++) cout<<1<<" ";
                cout<<endl;
            }
             else
            {

                if(k%2)
                {

                   ll x=n-(k-1);
                   if(x>0)
                   {
                       cy;
                    for(i=1;i<=k-1;i++) cout<<1<<" ";
                   cout<<x<<endl;
                   }
                   else cn;

                }
                else
                {
                    cn;
                }
            }

        }


    }

}


