
///https://atcoder.jp/contests/abc188/tasks/abc188_d

///atcoder_D-Snuke Prime.cpp

///without traversing whole array of range update

///here it it saying we can use cost of t1-t2 with ci or C

///tv channel subscription er moto

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=200005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    ll n,c;cin>>n>>c;

    vector<pll> v;

    for(i=0;i<n;i++)
    {
        ll t1,t2,cst;cin>>t1>>t2>>cst;
        v.push_back({t1,cst});
        v.push_back({t2+1,-cst});
    }

    sort(v.begin(),v.end());

    ll ans=0,cur=0;

    for(i=0;i<v.size();i++)
    {
        ll t1=v[i].ff;
        ll cst=v[i].ss;

       // cout<<"T1 "<<t1<<" CST "<<cst<<endl;


        ll t2;
        if(i+1<v.size())
        {

        t2=v[i+1].ff;

        ll dif=t2-t1;

        cur+=cst;

       // cout<<"CUR "<<cur<<" dif "<<dif<<endl;
       // cout<<"ANS "<<min(cur,c)*dif<<endl;

       ///ans+=(cur*dif)

        ans+=min(cur,c)*dif;


        }
    }

    cout<<ans<<endl;



    return 0;

}

/*

3 7
1 4 4
3 5 5
5 7 2

*/






