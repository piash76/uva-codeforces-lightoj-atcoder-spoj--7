

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second


using namespace std;

const int N=500005;

ll a[N];

ll ask(ll idx)
{
    cout<<"? "<<idx<<endl;
    cout.flush();
    ll x;
    cin>>x;

    return x;
}

void print_kor(ll x)
{
    cout<<"! "<<x<<endl;
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n;cin>>n;

    ll l=1,h=n,ans;

    bool f=false;

    while(l<=h)
    {
        ll mid=(l+h)/2;

        ll prev_num;

        if(mid-1<1) prev_num=LLONG_MAX;
        else prev_num=ask(mid-1);

        ll mid_num=ask(mid);

        ll next_num;
        if(mid+1>n) next_num=LLONG_MAX;
        else next_num=ask(mid+1);


        if(mid_num<prev_num and mid_num<next_num)
        {
            ans=mid;
            f=true;
            break;
        }

        if(mid_num>next_num) l=mid+1;
        else if(mid_num>prev_num) h=mid-1;


    }


    print_kor(ans);



    return 0;

}



