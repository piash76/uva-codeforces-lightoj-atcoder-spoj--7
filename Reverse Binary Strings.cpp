
#include<bits/stdc++.h>
using namespace std;

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const int mxn =  2111111;
#define ll long long


ll a[mxn];


int main()
{
    speed()

  ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        ll mx=-1,c=0,idx;
        i=0;
        map<ll,ll> m;

        while(i<n)
        {
            c=1;
            while(s[i]==s[i+1] and i+1<n)
            {
                c++;
                i++;
            }
            if(c!=1) m[c]++;
            i++;
        }

        for(auto x:m)
        {

            //cout<<"FIRSt "<<x.first<<" SECOND "<<x.second<<endl;
            mx=max(mx,x.second);
           // cout<<mx<<endl;
        }

        if(mx==-1) cout<<0<<endl;
        else  cout<<mx<<endl;




    }

}

/*
6
8
01110100
8
11001100

*/

