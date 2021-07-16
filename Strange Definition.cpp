






///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define pll             pair<ll,ll>
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second


#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)


using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll a[mx];

bool isPerfectSquare(long long num)
{
  // Find floating point value of
  // square root of x.
  long double x=num;
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}

int main()
{


    speed()

    ll t,i,j,cas=0;
   // cin>>t;
   // while(t--)
    //{
        for(ll n=1;n<=10;n++)
        {


        cout<<"N "<<n<<endl;
        for(i=1;i<=1000;i++)
        {
            ll x=LCM(n,i)/GCD(n,i);
            if(isPerfectSquare(x))
            {
                cout<<"I "<<i<<endl;
            }
        }
        cout<<endl;



        }
   // }


    return 0;

}




