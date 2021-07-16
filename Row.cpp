





///PROBLEM DESCRIPTION:


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
    ll n;cin>>n;
    string s;cin>>s;
    bool f=true;

    if(n==1 and s[0]=='0') f=false;
    else
    {
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1]) {f=false;break;}
    }
    }

    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

